#include "libri.h"
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

bool libro_scrivi(const struct libro *p, FILE *f){
   
    size_t num_vettore = 0;
    if(f == NULL){return false;}
    
    for (size_t i = 0; p->anni_ristampe[i] != 0; ++i) {
        ++num_vettore;
    }
    
    fwrite(p->titolo, sizeof(char), strlen(p->titolo)+1, f);
    fwrite(p->anni_ristampe, sizeof(uint16_t), num_vettore+1, f);
    
    if(ferror(f)){return false;}
    
    return true;
}
