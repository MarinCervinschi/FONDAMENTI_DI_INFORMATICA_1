#include "images.h"
#include <stdio.h>
#include <stdlib.h>
struct image *read_images(const char *filename, size_t *n){
    FILE *f = fopen(filename, "r");
    if(f == NULL){
        return NULL;
    }
    
    struct image *out = malloc(10* sizeof(struct image));
    size_t i = 0, size_max = 10;
    if(fscanf(f, "%[^:]", out[i].name) == EOF){
        fclose(f);
        free(out);
        return NULL;
    }
    rewind(f);
    
    while (fscanf(f, "%[^:]", out[i].name) != EOF) {
        fseek(f, 1, SEEK_CUR);
        fscanf(f, "%lu", &out[i].height);
        fseek(f, 1, SEEK_CUR);
        fscanf(f, "%lu", &out[i].width);
        fseek(f, 1, SEEK_CUR);
        ++i;
        if(i== size_max){
            size_max *= 2;
            out = realloc(out, size_max * sizeof(struct image));
        }
    }
    *n = i;
    out = realloc(out, *n * sizeof(struct image));
    fclose(f);
    return out;
}
