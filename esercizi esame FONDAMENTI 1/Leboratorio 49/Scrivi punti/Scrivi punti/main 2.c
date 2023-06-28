#include "WTK.h"
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    FILE *f = fopen("file1.txt", "w");
    
    struct point p1 = {5., 1.};
    struct point p2 = {4., 3.7};
    struct point p3 = {6.3,  8};
    
    struct point *P = calloc(3, sizeof(struct point));
    P[0] = p1;
    P[1] = p2;
    P[2] = p3;
    
    size_t num_poit = 0;
    num_poit = write_point(f, P, 3);
    
    
    fclose(f);
    return 0;
}
