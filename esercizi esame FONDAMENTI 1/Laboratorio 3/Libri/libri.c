#include "libri.h"
#include <stdio.h>
#include <stdlib.h>
struct libro *read_libri(const char *filename, unsigned int *pn){
    FILE *f = fopen(filename, "r");
    struct libro *libri_letti = malloc(sizeof(struct libro));
    int i = 0;
    
    while (fscanf(f, "%u", &libri_letti[i].codice) != EOF) {
        fseek(f, 1, SEEK_CUR);
        fscanf(f, "%[^;]", libri_letti[i].titolo);
        fseek(f, 1, SEEK_CUR);
        fscanf(f, "%u", &libri_letti[i].pagine);
        ++i;
        ++*pn;
        libri_letti = realloc(libri_letti, (*pn +1) * sizeof(struct libro));
    }
    libri_letti = realloc(libri_letti, *pn * sizeof(struct libro));
    fclose(f);
    
    return libri_letti;
}
