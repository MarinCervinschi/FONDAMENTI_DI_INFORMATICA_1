//
//  matrix.h
//  Normalizza righe
//
//  Created by Marin Cervinschi on 21/01/23.
//

#ifndef matrix_h
#define matrix_h

#include <stdio.h>

struct matrix {
    size_t rows, cols;
    double *data;
};
extern void mat_normalize_rows(struct matrix *m);
#endif /* matrix_h */
