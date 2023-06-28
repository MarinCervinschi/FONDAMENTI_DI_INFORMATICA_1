#include "scrittura.h"
#include <stdio.h>
#include <ctype.h>

int scrivimaiuscolo(const char *filename){
    
    FILE *f = fopen(filename, "r");
    if(f == NULL){
        return 0;
    }
    
    int c;
    while ((c = fgetc(f)) != EOF) {
        fprintf(stdout,"%c", toupper(c));
    }
    
    fclose(f);
    return 1;
}
