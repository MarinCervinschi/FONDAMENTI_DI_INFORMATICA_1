#include "demography.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
struct city *read_cities(const char *filename, uint32_t *n){
    FILE *f = fopen(filename, "rb");
    if(!f){
        return NULL;
    }
    unsigned int num;
    fread(&num, sizeof(int), 1, f);
    
    struct city *read = calloc(num, sizeof(struct city));
    int next;
    uint32_t i = 0;
    for (; i != num; ++i) {
        read[i].name = calloc(255, sizeof(char));
        size_t t = 0;
        for (; (next = fgetc(f)) != 0 ; t++) {
            ungetc(next, f);
            fread(&read[i].name[t], sizeof(char), 1, f);
            if(t == 200){
                for (size_t g = 0; g != i; ++g) {
                    free(read[g].name);
                }
                free(read);
                fclose(f);
                return NULL;
            }
        }
        read[i].name = realloc(read[i].name, t * sizeof(char));
        fread(&read[i].population, sizeof(unsigned int), 1, f);
    }
    *n = i;
    fclose(f);
    return read;
}
