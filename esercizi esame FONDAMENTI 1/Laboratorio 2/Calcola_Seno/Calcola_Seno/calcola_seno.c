#include <stdio.h>
#include <math.h>
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
double calcola_seno(double x){
    double pi_grego = 3.14159265;
    if(x / pi_grego >= 1){
        return 0;
    }
    if(x / (pi_grego/2) >= 1){
        return 1;
    }
    double n = 20;
    double y = 0;
    for (double i = 0; i != n; ++i) {
        y += (pow(-1, i) / fattoriale(2*i +1))
            * pow(x, 2*i +1);
    }
    return y;
}
int main(void) {
    double x = 3.14159265;
    double y;
    y = calcola_seno(x);
    
    return 0;
}
