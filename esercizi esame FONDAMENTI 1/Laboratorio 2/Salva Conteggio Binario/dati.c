#include "dati.h"
#include <stdlib.h>
struct dato *read_dati(const char *filename, unsigned int *pn){
    FILE *f = fopen(filename, "r");
    
    struct dato *dati = malloc(sizeof(struct dato));
    
    int i = 0, t = 0;
    while (fscanf(f, "%lf", &dati->valore + i) != EOF) {
        fscanf(f, "%u", &dati->classe +t );
        ++*pn;
        dati = realloc(dati, (*pn+1) * sizeof(struct dato));
        i += 2;
        t += 4;
    }
    dati = realloc(dati, *pn * sizeof(struct dato));
    fclose(f);
    
    return dati;
}
int salva_conteggio_bin (const char *filename, struct dato *pdati, unsigned int n){
    FILE *k = fopen(filename, "wb");
    
    
    return 1;
}
