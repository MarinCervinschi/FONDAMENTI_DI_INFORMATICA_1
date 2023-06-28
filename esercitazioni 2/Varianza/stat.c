#include <stdint.h>
#include <stdlib.h>
#include "stat.h"

double pow(double x, double n)
{
    double x1=x;
    
    if (n == 0) {
        return 1;
    }
    do {
        x *= x1;
        --n;
        if (n==1) {
            return x;
        }
    } while (n != 0);
    
    return x;
}
double media (double *x, unsigned int n)
{
    if (x == NULL)
    {
        return 0;
    }
    if (n == 0)
    {
        return 0;
    }
    for (size_t i=0; i != n-1; i++) {
        x[0] += x[i+1];
    }
    return x[0] / n;
}

double varianza(double *x, unsigned int n)
{
    if (x == NULL)
    {
        return 0;
    }
    if (n < 2)
    {
        return 0;
    }
    double t = 0.;
    for (size_t i=0; i != n; i++) {
       t += pow(x[i], 2);
    }
               
    return ( t / (n) ) -  pow(media(x,n), 2) *  (double)n / (n) ;
}


