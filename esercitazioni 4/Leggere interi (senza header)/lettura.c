#include "lettura.h"
#include <stdio.h>
#include <stdlib.h>
int *leggiinteri2(const char *filename, size_t *size){
    
    FILE *f = fopen(filename, "rb");
    if(f == NULL){
        return NULL;
    }
    int n = 0;
    size_t letti = -1;
    
    while (!feof(f)) {
        fread(&n, sizeof(int), 1, f);
        ++letti;
    }
    rewind(f);
    int *res = malloc(letti * sizeof(int));
    fread(res, sizeof(int), letti, f);
    
    *size = letti;
    
    if(*size == 0){
        fclose(f);
        free(res);
        return NULL;
        }

    fclose(f);
    return res;
}
