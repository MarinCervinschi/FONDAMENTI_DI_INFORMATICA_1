#include <stdint.h>
#include <stdlib.h>
#include "stat.h"

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

