#include <stdlib.h>

double potenza (double *d, double i)
{
    
        double x=*d;
        
        if (i == 0) {
            return *d = 1;
        }
        do {
        if (i==1) {
                return *d;
            }
        *d *= x;
            --i;
            
        } while (i != 0);
        
        return *d;
    
}

int main(void)
{
    double a[] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
    size_t i, n = 10;

    for (i = 0; i < n; ++i) {
        double d = a[i];
        potenza(&d, i);
        a[i] = d;
        }
    
    return 0;
}
