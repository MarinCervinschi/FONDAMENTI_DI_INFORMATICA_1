#include "array_rotate.h"
#include <stdlib.h>
int *rotate(const int *vec, size_t len, size_t r){
    if(vec == NULL){return NULL;}
    int *ret = calloc(len, sizeof(int));
    
    for (size_t i = 0, t = 0; i != len; ++i, ++t) {
        while (t+r > len) {
            r -= len;
        }
        if(t+r == len){
            t = 0;
            while (i != len) {
                ret[t] = vec[i];
                ++i;
                ++t;
            }
            break;
        }
        ret[t+r] = vec[i];
    }

    return ret;
}
