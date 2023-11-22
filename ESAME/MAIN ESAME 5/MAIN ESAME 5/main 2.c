#include "demography.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
int main(void) {
    uint32_t n = 0;
    struct city *ret = read_cities("cities02.bin", &n);
    
    free(ret);
    return 0;
}
