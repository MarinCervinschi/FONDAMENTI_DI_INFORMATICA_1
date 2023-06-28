#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>
struct matrix *mat_reset_cross(const struct matrix *m, size_t ir, size_t ic){
    
    if(m == NULL){
        printf("NULL");
        return NULL;
    }
    if(ir > m->rows || ic > m->cols){
        printf("NULL");
        return NULL;
    }
    
    struct matrix *out = malloc(sizeof(struct matrix));
    out->rows = m->rows;
    out->cols = m->cols;
    out->data = calloc(out->rows * out->cols, sizeof(double));
    
    for (size_t r = 0; r< out->rows; ++r) {
        for (size_t c = 0; c < out->cols; ++c) {
            if(r == ir){
                out->data[r *out->cols +c] = 0;
                continue;
            }
            if(c==ic){
                out->data[c *out->rows +c] = 0;
                continue;
            }
            out->data[r *out->cols +c] = m->data[r*out->cols + c];
        }
    }
    out->data[ir* out->cols + ic] = m->data[ir* m->cols + ic];
    

    return out;
}
