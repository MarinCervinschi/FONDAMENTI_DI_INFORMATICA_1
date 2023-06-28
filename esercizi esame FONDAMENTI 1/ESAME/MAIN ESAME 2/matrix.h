#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
struct matrix {
    size_t rows, cols;
    double *data;
};
extern struct matrix *mat_normalize_rows(const struct matrix *m);
#endif /* MATRIX_H */
