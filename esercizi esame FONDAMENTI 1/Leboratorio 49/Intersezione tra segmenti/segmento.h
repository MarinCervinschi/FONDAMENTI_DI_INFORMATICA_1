#ifndef segmento_h
#define segmento_h

#include <stdio.h>

struct segmento {
    int a, b;
};
extern struct segmento *intersezione(struct segmento s1, struct segmento s2);
#endif /* segmento_h */
