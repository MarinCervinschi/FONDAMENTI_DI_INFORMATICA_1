double pow(double x, double n)
{
    double x1=x;
    
    if (n == 0) {
        return 1;
    }
    do {
        if (n==1) {
            return x;
        }
        x *= x1;
        --n;
    } while (n != 0);
    
    return x;
}
unsigned int fattoriale(unsigned char val)
{
    unsigned int valF = 0;
    unsigned char n = val -1;
    
    if (val == 1) {
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

double calcola_seno(double x)
{
    if (x == 0.) {
        return 0.;
    }
    double k = x / 3.1416;
    //if (k >= 1) {
      //  return 0.;
    //}
    double t, n = 0;
    double seno =0;
    double t1 = 0;
    while (1) {
        t = ( pow((-1.), n) / fattoriale((2 * n) + 1) ) * pow(x, (2 * n) + 1);
        ++n;
        seno += t;
        double p = seno * 0.5;
        double j = (seno -t) * 0.5;
        if (seno * 0.5 == (seno-t) * 0.5) {
            break;
        }
    }
    
    return seno;
}
int main (void)
{
    const double π = 3.1416;
    double x = π/2;
    double seno;
    seno = calcola_seno(x);
    
    return 0;
}

