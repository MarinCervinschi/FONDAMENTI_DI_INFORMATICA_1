#ifndef matrix_h
#define matrix_h

#include <stdio.h>
#include <stdlib.h>
struct matrix {
    size_t rows, cols;
    double *data;
};
extern struct matrix *matrix_quadruplica(const struct matrix *m);

#endif /* matrix_h */
