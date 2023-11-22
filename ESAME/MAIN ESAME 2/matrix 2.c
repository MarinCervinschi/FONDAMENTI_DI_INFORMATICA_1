#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct matrix *mat_normalize_rows(const struct matrix *m){
    if(!m){
        return NULL;
    }
    struct matrix *out = malloc(sizeof(struct matrix));
    
    out->rows = m->rows;
    out->cols = m->cols;
    out->data = calloc( out->rows * out->cols, sizeof(double));
    
    for (size_t r = 0; r < m->rows; ++r) {
        for (size_t c = 0; c < m->cols; ++c) {
            double x = 0;
            for (size_t c1 = 0; c1 != m->cols; ++c1) {
                x += m->data[r * m->cols + c1] * m->data[r * m->cols + c1];
            }
            if(x== 0){
                out->data[r * m->cols + c] = m->data[r * m->cols + c];
                continue;
            }
            out->data[r * m->cols + c] = m->data[r * m->cols + c] /  sqrt(x);
        }
    }
    return out;
}

