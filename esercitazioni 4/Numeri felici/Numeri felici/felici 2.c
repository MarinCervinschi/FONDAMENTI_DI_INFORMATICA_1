#include <stdlib.h>
int felice(unsigned int num){
    
    while (num != 1) {
        if(num == 0){
            return 0;
        }
        
        size_t num_valori = 0;
        unsigned int x = num;
        
        while (x * 0.5 != 0) {
            x /= 10;
            ++num_valori;
        }

        int *valori = malloc(num_valori * sizeof(int));
        for (size_t i = 0; i != num_valori; ++i) {
            valori[i] = num %  10;
            num /= 10;
        }

        for (size_t i = 0; i != num_valori; ++i) {
            num += (valori[i] * valori[i]);
        }
        if (num == 4) {
            free(valori);
            return 0;
        }
        free(valori);
    }
    
    return 1;
}

int main(void){
    
    unsigned int num = 123456;
    unsigned int res;
    res = felice(num);
    
    return 0;
}

