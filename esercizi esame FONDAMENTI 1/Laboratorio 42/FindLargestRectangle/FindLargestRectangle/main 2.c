#include <stdio.h>
#include "rectangle.h"
#include <stdlib.h>

int main(void) {
    struct point p1 = {0,1};
    struct point p2 = {4,-1};
    struct point p3 = {3,5};
    struct point p4 = {-3,10};
    
    struct rect R1 = { p1, p2};
    struct rect R2 = { p3, p4};
    
    
    size_t n = 2;
    struct rect *r = malloc(n * sizeof(struct rect));
    r[0] = R1; r[1] = R2; 
    
    int ret = 0;
    ret = find_largest(r, n);
    free(r);
    return 0;
}
