#include "rectangle.h"
#include <math.h>
#include <stdlib.h>
int find_largest(const struct rect *r, size_t n){
    if(r == NULL || r == 0){
        return -1;
    }
    double *diagonale = calloc(n, sizeof(double));
    
    for (size_t i = 0; i != n; ++i) {
        diagonale[i] = sqrt((r[i].a.x - r[i].b.x) * (r[i].a.x - r[i].b.x) + (r[i].a.y - r[i].b.y) * (r[i].a.y - r[i].b.y));
    }
    double max = diagonale[0];
    for (size_t i = 0; i != n; ++i) {
        if(diagonale[i] > max){
            max = i;
        }
    }
    if(diagonale[0] == max){
        free(diagonale);
        return 0;
    }
    free(diagonale);
    return max;
}
