#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>
struct matrix *mat_pad(const struct matrix *mat){
    struct matrix *pad = malloc(sizeof(struct matrix));
    
    pad->rows = mat->rows * 2 - 1;
    pad->cols = mat->cols * 2 - 1;
    pad->data = calloc(pad->rows * pad->cols, sizeof(double));
    size_t g =0, k = 1,b =0;
    
    for (size_t r = 0; r < pad->rows; ++r) {
        for (size_t c = 0; c < pad->cols; ++c) {
            pad->data[r * pad->cols + c] = 0.;
        }
    }
    for (size_t r = 0; r < pad->rows; ++r) {
        for (size_t c = 0, m = 0; c < pad->cols; ++c) {
            if(r == k){
                if(c+1 == pad->cols){
                    k += 2;
                }
                continue;
            }
            if(c == m){
                pad->data[r * pad->cols + c] = mat->data[g * mat->cols + b];
                m += 2;
                ++b;
            }
        }
    }
    
    return pad;
}
