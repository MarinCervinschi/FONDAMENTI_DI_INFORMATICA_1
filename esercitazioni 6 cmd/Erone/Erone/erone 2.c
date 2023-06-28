#include <stdio.h>
#include <stdlib.h>

double radq(double a) {
    double t, x = a;
    if (x<=0.)
return 0.;
do {
t = x;
        x = 0.5*(t + a/t);
    } while (x!=t);
return x; }

int main(int argc, char * argv[]) {
   
    if(argc != 4){
        return 1;
    }
    
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    double area;
    
    if(a <= 0 || b <= 0 || c <= 0){
        return 1;
    }
    area = radq( (a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c) ) / 4;
    
    printf("%f", area);
    
    
    return 0;
}
