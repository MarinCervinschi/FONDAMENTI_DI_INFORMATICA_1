#include "radice.h"
#include "discriminante.h"

int soluzioni(double a, double b, double c, double *x1, double *x2)
{
    if (discriminante(a, b, c) < 0) {
        return 0;}
    if (discriminante(a, b, c) == 0) {
        
        *x1 = (-b + (radq(discriminante(a, b, c)) )) / (2.*a);
        *x2 = (-b - (radq(discriminante(a, b, c)) )) / (2.*a);
        
        return 1;
        }
    if (discriminante(a, b, c) > 0) {
        
        *x1 = (-b + (radq(discriminante(a, b, c)) )) / (2.*a);
        *x2 = (-b - (radq(discriminante(a, b, c)) )) / (2.*a);
        
        return 2;
    }
    return 0;
}
int main(void) {
    
    unsigned char F;
    double x1, x2;
    double a=1., b=2.,c=1.;
    F = soluzioni(a, b, c, &x1, &x2);
    
    return 0;
}

