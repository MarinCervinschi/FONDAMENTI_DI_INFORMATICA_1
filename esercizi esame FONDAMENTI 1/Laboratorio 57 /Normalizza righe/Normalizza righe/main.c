#include <stdio.h>
#include "matrix.h"
#include <stdlib.h>
void mat_print(struct matrix *m){
    for (size_t r = 0; r < m->rows; ++r) {
        for (size_t c = 0; c < m->cols; ++c) {
            printf("%lf", m->data[r * m->cols + c]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(void) {
   
    double Xdata[] = {
        7.,5.,
        3.,12.,
        0.,0.,
        11.,8.,
    };
    struct matrix A = { 4, 2, Xdata};
    mat_print(&A);
    
    mat_normalize_rows(&A);
    mat_print(&A);
    
    
    return 0;
}
