#include <stdio.h>
#include "imperial.h"
#include <stdlib.h>
int main(void) {
    
    char *str = "100 yd.";
    double metri = 0;
    metri = to_meter(str);
    printf("%lf", metri);
    return 0;
}
