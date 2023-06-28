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

unsigned int fattoriale(unsigned char val)
{
    unsigned int valF = 0;
    unsigned char n = val -1;

    if (val == 1 || val == 0) {
        return 1;
        }
    while (n != 0)
    {
        if (valF > 1)
            valF *= n;
        else
            valF =(val * n);

        n -= 1;
    }
    return valF;
}

double exp (double x)
{
    unsigned int v = 10;
    /*double  F = 0, l = 0;
    
    for (double n = 0, t = 0; 1; ++n) {
        t = pow(x, n) / fattoriale(n);
        if ((int)(t* pow(10, 4)) == (int)(l* pow(10, 4))) {
            break;
        }
        l = t;
        F += t;
    }
     */
   
    double n = 2., x1 = x, F=0., t=0., l = 0;
    F = 1. + x + ( (pow(x, n)) / fattoriale(n) );
    n += 1.;
    do {
            x1 *= x;
            t = ( (x*x1) / fattoriale(n) );
        if (t* 0.5 == l* 0.5) {
            break;
        }
        l = t;
            F += t;
            ++n;
        } while (1);
     
    return F;
}
int main(void)
{
    double F, x = 1;
    
    F = exp(x);

    return 0;
}

