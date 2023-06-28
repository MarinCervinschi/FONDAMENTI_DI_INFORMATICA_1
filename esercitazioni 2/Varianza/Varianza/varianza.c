#include <stdint.h>
#include <stdlib.h>
#include "stat.h"

int main (void)
{
    uint n = 5;
    double *x = malloc(n* sizeof(double));
    x[0]= 4;
    x[1]= 5;
    x[2]= 6;
    x[3]= 7;
    x[4]= 8;
    
    double v = 0;
    v = varianza(x, n);
    
    free(x);
    return 0;
}
