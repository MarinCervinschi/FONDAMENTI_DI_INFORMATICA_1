#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>
struct matrix *matrix_quadruplica(const struct matrix *m){
    if(m == NULL){
        return NULL;
    }
    struct matrix *out = malloc(sizeof(struct matrix));
    
    out->rows = m->rows * 2;
    out->cols = m->cols * 2;
    out->data = calloc(out->rows * out->cols, sizeof(double));
    
    
        for (size_t r = 0; r < m->rows; ++r) {
            for (size_t c = 0; c < m->cols; ++c) {
                double value = m->data[r * m->cols + c];
                size_t out_r1 = r, out_c1 = c;
                size_t out_r2 = r, out_c2 = c + m->cols;
                size_t out_r3 = r + m->rows, out_c3 = c;
                size_t out_r4 = r + m->rows, out_c4 = c + m->cols;
                out->data[out_r1 * out->cols + out_c1] = value;
                out->data[out_r2 * out->cols + out_c2] = value;
                out->data[out_r3 * out->cols + out_c3] = value;
                out->data[out_r4 * out->cols + out_c4] = value;
            }
        }

    return out;
}
