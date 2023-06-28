#include "libri.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

struct libro *filtra_libri (struct libro *plibri, unsigned int *pn, const char *cerca){
    struct libro *filtra = calloc(*pn, sizeof(struct libro));

    
    int h = 0;
    for (unsigned int i = 0, t = 0; i != strlen(plibri[t].titolo) ; ++i) {
        if(plibri[t].titolo[i] == cerca[0]){
            size_t p = 0;
            for (; p!= strlen(cerca); ++p) {
                if(plibri[t].titolo[i] != cerca[p]){
                    break;
                }
                ++i;
            }
            if(p != strlen(cerca)){
                if(i == strlen(plibri[t].titolo)){
                    ++t;
                    i = -1;
                }
                continue;
            }
            
            filtra[h] = plibri[t];
            --*pn; ++h;
            ++t;
            i = -1;
            continue;
        }
        if(i+1 == strlen(plibri[t].titolo)){
            ++t;
            i = -1;
        }
    }
    filtra = realloc(filtra, *pn * sizeof(struct libro));
    
    
    return filtra;
}
