#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int n = atoi(argv[1]);
    if (argc != 2 || n < 0) {
        return 1;
    }
    
    while (1) {
        size_t num_valori = 0;
        int x = n;
        while (x * 0.5 != 0) {
            x /= 10;
            ++num_valori;
        }
        int *vettore = calloc(num_valori, sizeof(int));
        
        for (size_t i = 0; i != num_valori; ++i) {
            vettore[i] = n % 10;
            n /= 10;
        }
        int radicenumerica = 0;
        for (size_t i = 0; i != num_valori; ++i) {
            radicenumerica += vettore[i];
        }
        if(radicenumerica < 10){
            printf("%d", radicenumerica);
            free(vettore);
            break;
        }
        n = radicenumerica;
    }
    
    
    
    return 0;
}
