#ifndef matrix_h
#define matrix_h

#include <stdlib.h>
struct matrix {
    size_t rows, cols;
    double *data;
};

extern struct matrix *scambia_diagonali(const struct matrix *m);

#endif /* matrix_h */
