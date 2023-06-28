#include <stdint.h>
#include <stdlib.h>
#include "stat.h"

int main (void)
{
    uint n = 5;
    double *x = malloc(n* sizeof(double));
    x[0]= 3;
    x[1]= 5;
    x[2]= 7;
    x[3]= 9;
    x[4]= 11;
    
    double m = 0;
    m = media(x, n);
    
    free(x);
    return 0;
}


