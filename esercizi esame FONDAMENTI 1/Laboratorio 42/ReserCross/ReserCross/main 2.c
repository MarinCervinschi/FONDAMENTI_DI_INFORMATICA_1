#include <stdio.h>
#include "matrix.h"
void mat_print(const struct matrix *m){
    for (size_t r = 0; r < m->rows; ++r) {
        for (size_t c = 0 ; c < m->cols; ++c) {
            printf("%f ", m->data[r*m->cols + c ]);
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
    
    double d[] = {5. };
    struct matrix A = {1,1, d};
    mat_print(&A);
    size_t ir = 1, ic = 0;
    struct matrix *reset_cross = mat_reset_cross(&A, ir, ic);
    if(reset_cross == NULL){
        return 0;
    }
    mat_print(reset_cross);
    
    mat_destroy(reset_cross);
    return 0;
}
