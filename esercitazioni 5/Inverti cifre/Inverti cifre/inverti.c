#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned int inverti(unsigned int i){
    
    size_t num_valori = 0;
    unsigned int x = i;
    
    while (x * 0.5 != 0) {
        x /= 10;
        ++num_valori;
    }
    
    unsigned int *res = malloc(num_valori * sizeof(unsigned int));
    
    for (size_t t = 0; t != num_valori; ++t) {
        res[t] = i % 10;
        i /= 10;
    }
    unsigned int out = 0;
    for (size_t i = 0, x = num_valori; i != num_valori; ++i) {
        out += res[i] * pow(10, x-1);
        --x;
    }
    free(res);
    return out;
}

int main(void) {
    unsigned int x = 1008;
    unsigned int res;
    res = inverti(x);
    
    return 0;
}
