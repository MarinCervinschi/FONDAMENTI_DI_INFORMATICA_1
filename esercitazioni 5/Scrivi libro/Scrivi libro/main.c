#include <stdio.h>
#include "libri.h"
#include <stdlib.h>
#include <stdint.h>

int main(void) {
    
    
    uint16_t anni[] = {2001, 2002, 0};
    struct libro G ={"Geometria" , anni};
   
    FILE *f = fopen("libro", "wb");
    
    unsigned int res;
    res = libro_scrivi(&G, f);
    
    fclose(f);
    
    return 0;
}
