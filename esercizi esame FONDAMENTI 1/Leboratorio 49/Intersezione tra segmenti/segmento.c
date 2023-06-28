#include "segmento.h"
#include <stdio.h>
#include <stdlib.h>
struct segmento *intersezione(struct segmento s1, struct segmento s2){
    if (s1.a > s1.b || s2.a > s2.b) {
        printf("NULL");
        return NULL;
    }
    struct segmento *out = calloc(1,sizeof(struct segmento));
    int a1 = s1.a;
    while (s1.a != s1.b) {
        if(s1.a == s2.a){
            if(out->a == 0){
                out->a = s1.a;
            }
            out->b = s1.a+1;
            ++s2.a;
        }
        ++s1.a;
    }
    if(out->a != 0){
        return out;
    }
    while (s2.a != s2.b) {
        if(s2.a == a1){
            if(out->a == 0){
                out->a = s2.a;
            }
            if(a1 == s1.b){
                break;
            }
            out->b = s2.a+1;
            ++a1;
        }
        ++s2.a;
    }
    if(out->a == 0){
        free(out);
        printf("NULL");
        return NULL;
    }
    
    return out;
}
