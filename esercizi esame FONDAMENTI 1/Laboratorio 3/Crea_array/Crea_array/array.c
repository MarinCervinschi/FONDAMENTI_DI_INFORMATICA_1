#include <stdio.h>
#include <stdlib.h>
int *crea_inizializza (unsigned int n, int val){
    int *vet = calloc(n, sizeof(int));
    for (unsigned int i = 0; i != n; ++i) {
        vet[i] = val - i;
    }
    return vet;
}
int main(int argc, const char * argv[]) {
    unsigned int n = 5;
    int val = 3;
    int *vet = crea_inizializza(n, val);
    
    free(vet);
    return 0;
}
