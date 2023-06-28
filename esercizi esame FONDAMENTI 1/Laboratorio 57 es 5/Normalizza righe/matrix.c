#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void mat_normalize_rows(struct matrix *m){
    if (m == NULL) {
        return;
    }
    struct matrix *m2 = malloc(sizeof(struct matrix));
    m2->rows = m->rows;
    m2->cols = m->cols;
    m2->data = calloc(m2->rows * m2->cols, sizeof(double));
    
    for (size_t r = 0; r < m->rows; ++r) {
        for (size_t c = 0; c < m->cols; ++c) {
            m2->data[r * m2->cols + c] = m->data[r * m->cols + c];
        }
    }
    
    for (size_t r = 0; r < m->rows; ++r) {
        for (size_t c = 0; c < m->cols; ++c) {
            double x = 0.;
            for (size_t c1 = 0; c1 < m->cols; ++c1) {
                x += m2->data[r * m->cols + c1] * m2->data[r * m->cols + c1];
                if (x == 0) {
                    x = 1;
                }
            }
            m->data[r * m->cols + c] = m->data[r * m->cols + c] / sqrt(x);
        }
    }
    free(m2->data);
    free(m2);
}
