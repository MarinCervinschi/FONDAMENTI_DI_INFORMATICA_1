int divisione(double a, double b, double *q) {
    unsigned char F=0;
    
    
    if (b != 0) {
        *q = a / b;
        F = 1;
    }
    
    return F;
}
/*int main (void)
{
    double x = 0;
    double a= 27.0, b= 3.0, *q = 0;
    unsigned char F;
    q = &x;
    

    F= divisione(a, b, q);
    
    return 0;
}
*/
