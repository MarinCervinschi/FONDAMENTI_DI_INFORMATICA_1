#include "lettura.h"
#include <stdlib.h>
int *leggiinteri(const char *filename, size_t *size){
    
    FILE *f = fopen(filename, "rb");
    if(f == NULL){
        return NULL;
    }
    int n;
    fread(&n, sizeof(int), 1, f);
    int *res = malloc(n * sizeof(int));
    
    *size = n;
    
    size_t letti = fread(res, sizeof(int), n, f);
    
    if(letti != *size){
        fclose(f);
        free(res);
        return NULL;
        }

    fclose(f);
    return res;
}
