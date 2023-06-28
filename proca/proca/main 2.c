#include <stdio.h>

int main(void) {
    double x1 = 0.5;
    double x2 = -0.5;
    double x3 = 0.5;
    
    double y1 = 0.5;
    double y2 = -0.5;
    double y3 = 0.5;
    
    double res = x1*y1 + 2*(x2*y2) - x1*y2 - x2*y1 + x3*y3;
    printf("%f\n", res);
    
    return 0;
}
