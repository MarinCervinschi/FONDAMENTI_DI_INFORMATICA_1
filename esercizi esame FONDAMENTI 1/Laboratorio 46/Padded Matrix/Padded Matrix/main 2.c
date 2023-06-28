#include <stdio.h>
#include "matrix.h"
#include <stdlib.h>
void mat_print(struct matrix *m){
    for (size_t r = 0; r < m->rows; ++r) {
        for (size_t c = 0; c < m->cols; ++c) {
            printf("%f", m->data[r *m->cols +c]);
        }
        printf("\n");
    }
    printf("\n");
}
void mat_destroy(struct matrix *m){
    if(m != NULL){
        free(m->data);
        free(m);
    }
}
int main(void) {
    
    double Xdata[] = {
        1., 2.,
        3., 4.,
        5., 6.,
    };
    struct matrix A = { 3, 2, Xdata};
    mat_print(&A);
    
    struct matrix *mat = mat_pad(&A);
    mat_print(mat);
    
    mat_destroy(mat);
    return 0;
}
