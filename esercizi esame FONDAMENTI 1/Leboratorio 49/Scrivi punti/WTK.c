#include "WTK.h"
#include <stdio.h>
#include <stdlib.h>
size_t write_point(FILE *f, const struct point *p, size_t n){
    if(n == 0 || f == NULL){
        return 0;
    }
    size_t scritti = 0;
    for (size_t i = 0; i != n; ++i) {
        fprintf(f, "POINT(%g %g)\n", p[i].x, p[i].y);
        ++scritti;
    }
    return scritti;
}
