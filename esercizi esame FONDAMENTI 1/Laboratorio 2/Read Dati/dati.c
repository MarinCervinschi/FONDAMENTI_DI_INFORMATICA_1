#include "dati.h"
#include <stdlib.h>
struct dato *read_dati(const char *filename, unsigned int *pn){
    FILE *f = fopen(filename, "r");
    struct dato *dati = calloc(1 , sizeof(struct dato));
    int i = 0;
    while (fscanf(f, "%lf", &dati[i].valore) != EOF) {
        fscanf(f, "%u", &dati[i].classe);
        ++*pn;
        ++i;
        dati = realloc(dati, sizeof(struct dato) * (1 + *pn));
    }
    dati = realloc(dati, *pn * sizeof(struct dato));
    fclose(f);
    
    return dati;
}
