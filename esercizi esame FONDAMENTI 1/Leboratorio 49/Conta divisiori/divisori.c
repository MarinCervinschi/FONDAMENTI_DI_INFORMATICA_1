#include "divisori.h"
#include <stdio.h>
#include <stdlib.h>
unsigned int conta_divisori(unsigned int num, unsigned int max){
    if(max == 0){
        return 0;
    }
    unsigned int num_divisori = 0;
    for (unsigned int i = 1; i != max; ++i) {
        if(num % i == 0){
            ++num_divisori;
        }
    }
    if(num == max){
        ++num_divisori;
    }
    return num_divisori;
}
