#include "matrix.h"
#include <stdlib.h>
#include <stdio.h>

void mat_print(const struct matrix *m){
    for (size_t r = 0; r < m->rows; ++r) {
        for (size_t c = 0; c < m->cols; ++c) {
            printf("%f ", m->data[r*m->cols + c]);
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

int main(void){
    double Xdata[] = {
        1, 2, 3, 5,
        4, 5, 6, 2,
        7, 8, 9, 2,
        4, 2, 3, 3,
        };
    
    struct matrix X = {4, 4, Xdata};
    mat_print(&X);
    
    struct matrix *s_d = scambia_diagonali(&X);
    mat_print(s_d);
    
    mat_destroy(s_d);
    return 0;
    
}
