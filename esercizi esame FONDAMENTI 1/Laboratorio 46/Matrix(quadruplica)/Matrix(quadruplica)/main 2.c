#include <stdio.h>
#include "matrix.h"
#include <stdlib.h>

void mat_print(struct matrix *m){
    for (size_t r = 0; r < m->rows; ++r) {
        for (size_t c = 0; c < m->cols; ++c) {
            printf("%f", m->data[r * m->cols + c]);
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
        1., 2., 3.,
        4., 5., 6.,
    };
    struct matrix mat = { 2,3, Xdata};
    mat_print(&mat);
    
    struct matrix *ret = matrix_quadruplica(&mat);
    mat_print(ret);
    
    mat_destroy(ret);
    return 0;
}
