#ifndef WTK_h
#define WTK_h

#include <stdio.h>
#include <stdlib.h>
struct point {
    double x, y;
};
extern size_t write_point(FILE *f, const struct point *p, size_t n);

#endif /* WTK_h */
