#include <stdio.h>
#include "divisori.h"
int main(void) {
    unsigned int num = 25462, max = 25462;
    
    unsigned int num_divisori = 0;
    num_divisori = conta_divisori(num, max);
    
    return 0;
}
