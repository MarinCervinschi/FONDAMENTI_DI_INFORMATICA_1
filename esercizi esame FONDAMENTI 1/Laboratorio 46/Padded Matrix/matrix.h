#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
struct matrix {
    size_t rows, cols;
    double *data;
};
extern struct matrix *mat_pad(const struct matrix *mat);
#endif /* MATRIX_H */
