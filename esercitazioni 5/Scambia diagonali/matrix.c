#include "matrix.h"
#include <stdio.h>
struct matrix *scambia_diagonali(const struct matrix *m){
    if(m == NULL){return NULL;}
    if(m->rows != m->cols){return NULL;}
    
    struct matrix *out = malloc(sizeof(struct matrix));
    
    out ->cols = m->cols;
    out ->rows = m->rows;
    out ->data = calloc(out ->cols * m->cols, sizeof(double));
    
    for (size_t r = 0; r < out->rows; ++r) {
           for (size_t c = 0; c < out->cols; ++c) {
               // prima riga
               if((r * out->cols + c) == 0){
                   out->data[r * out->cols + c] = m->data [r * m->rows + m->rows-1];
                   continue;
               }
               if(r * m->rows + c == m->rows-1){
                   out->data[r * out->cols + c] = m->data [r * m->rows];
                   continue;
               }
               //ultima riga
               if(r * out->cols + c == (m->rows * m->rows) - m->rows){
                   out->data[r * out->cols + c] = m->data [m->rows * m->rows-1];
                   continue;
               }
               if(r * out->cols + c == m->rows * m->rows - 1){
                   out->data[r * out->cols + c] = m->data [(m->rows * m->rows) - m->rows];
                   continue;
               }
               //in mezzo
               if(r * out->cols + c == m->rows * r + 1){
                   if(r == m->rows -1){
                       out->data[r * out->cols + c] = m->data [r * m->rows + c];
                       continue;
                   }
                   else if (r == 0){
                       out->data[r * out->cols + c] = m->data [r * m->rows + c];
                       continue;
                   }
                   out->data[r * out->cols + c] = m->data [(1+r) * m->rows -2];
                   continue;
               }
               if(r * out->cols + c == (1 + r) * m->rows - 2){
                   if(r == m->rows -1){
                       out->data[r * out->cols + c] = m->data [r * m->rows + c];
                       continue;
                   }
                   else if (r == 0){
                       out->data[r * out->cols + c] = m->data [r * m->rows + c];
                       continue;
                   }
                   out->data[r * out->cols + c] = m->data [1 + r * m->rows];
                   continue;
               }
               //copia normale
               out->data[r * out->cols + c] = m->data [r * m->rows + c];
           }
       }
        
    return out;
}
