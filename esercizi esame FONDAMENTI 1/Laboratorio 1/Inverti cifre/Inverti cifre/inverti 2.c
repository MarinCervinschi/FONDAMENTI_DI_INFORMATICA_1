#include <stdio.h>
#include <math.h>
#include <stdlib.h>
unsigned int inverti (unsigned int i){
    if(i<10){
        return i;
    }
    unsigned int k = i;
    unsigned int res = 0, num = 0;
    while (i != 0) {
        i /= 10;
        ++num;
    }
    unsigned int *vet = calloc(num, sizeof(unsigned int));
    for (unsigned int i = 0; i != num; ++i) {
        vet[i] = k % 10;
        k /= 10;
    }
    unsigned int w = num-1;
    for (unsigned int t = 0; t != num; ++t) {
        res += vet[t] * pow(10, w);
        --w;
    }
    free(vet);
    return res;
}
int main(void) {
    unsigned int i = 456789;
    unsigned int res = 0;
    res = inverti(i);
    
    return 0;
}
