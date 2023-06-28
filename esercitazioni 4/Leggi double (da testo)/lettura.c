#include "lettura.h"
#include <stdio.h>
#include <stdlib.h>
double *leggidouble(const char *filename, size_t *size){
    
    FILE *f = fopen(filename, "r");
    if(f == NULL){
        return NULL;
    }
    size_t letti = 0;
    if (fgetc(f) == EOF) {
        fclose(f);
        return NULL;
    }
    rewind(f);
    double *t = malloc(sizeof(double));
    int ret = 0;
    while (ret != EOF) {
        ret = fscanf(f, "%lf", t);
        ++letti;
    }
    letti -= 1;
    
    rewind(f);
    double *res = malloc(letti * sizeof(double));
    
    for (size_t i = 0; i != letti; ++i) {
        fscanf(f, "%lf", res+i);
    }
    
    *size = letti;
    free(t);
    fclose(f);
    return res;
}
