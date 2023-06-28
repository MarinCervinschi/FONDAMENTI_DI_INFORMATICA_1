#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool crescente(unsigned int x){
 
    unsigned int x1 = x;
    size_t num_valori = 0;
    for (size_t i = 0; x1 * 0.5 != 0; ++i) {
        x1 /= 10;
        ++num_valori;
    }
    if (num_valori == 1) {
        return true;
    }
    for (size_t i = 0; i != num_valori; ++i) {
        unsigned int x2 = x;
        x2 %= 10;
        x /= 10;
        if(x == 0){return true;}
        if(x2- 1 == x % 10 ){continue;}
        else{return false;}
    }
    return true;
}

int main(void) {
 
    unsigned int x;
    x = 56789;
    unsigned int res;
    res = crescente(x);
    
    return 0;
}
