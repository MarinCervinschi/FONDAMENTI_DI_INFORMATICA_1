#include <stdio.h>
#include "segmento.h"
#include <stdlib.h>

int main(void) {
    
    struct segmento s1 ={1,3};
    struct segmento s2 ={5,7};
    
    struct segmento *ret = intersezione(s1, s2);
    
    free(ret);
    return 0;
}
