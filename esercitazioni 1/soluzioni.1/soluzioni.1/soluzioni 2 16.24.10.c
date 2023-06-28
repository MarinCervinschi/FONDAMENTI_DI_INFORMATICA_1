double radq(double a) {
    double t, x = a;
    if (x<=0.)
return 0.;
do {
t = x;
        x = 0.5*(t + a/t);
    } while (x!=t);
return x; }
double discriminante (double a, double b, double c)
{
    double D;
    D= (b*b)-(4*(a*c));
    return D;
}
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
/*int main(void) {
    
    unsigned char F;
    double x1, x2;
    double a=3., b=2.,c=-1.;
    F = soluzioni(a, b, c, &x1, &x2);
    
    return 0;
}
*/
