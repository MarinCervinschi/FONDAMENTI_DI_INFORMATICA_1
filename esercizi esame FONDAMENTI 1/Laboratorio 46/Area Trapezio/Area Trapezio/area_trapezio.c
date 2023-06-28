#include <math.h>
double area_trapezio(double a, double b, double c, double d){
    double x;
    if(a > b){
        x = b;
        b = a;
        a = x;
    }
    double area = 0.5 * (a+b) * sqrt( (c*c) - 0.25 * ( (b-a) + ((c*c)-(d*d))/ (b-a) )* ( (b-a) + ((c*c)-(d*d))/ (b-a) ) );
    return area;
}
int main(void) {
    
    double a = 2.2;
    double b = 3.1;
    double c = 2.4;
    double d = 2.9;
    
    double area = area_trapezio(a, b, c, d);
    
    return 0;
}
