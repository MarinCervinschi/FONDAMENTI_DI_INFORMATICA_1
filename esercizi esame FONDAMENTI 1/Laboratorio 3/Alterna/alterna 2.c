#include "alterna.h"
#include <string.h>
#include <stdlib.h>
char *alterna (const char *s1, const char *s2){
    if(strlen(s1) == 0){
        char *s3 = calloc(strlen(s2)+1, sizeof(char));
        strcpy(s3, s2);
        return s3;
    }
    if(strlen(s2) == 0){
        char *s3 = calloc(strlen(s1)+1, sizeof(char));
        strcpy(s3, s1);
        return s3;
    }
    char *s3 = calloc(strlen(s1)+strlen(s2)+1, sizeof(char));
    for (size_t i = 0, t = 0, k = 1; i != (strlen(s1)+strlen(s2))/2+1; ++i) {
        if(strlen(s1) <= i){
            s3[i+t] = s2[i];
            continue;
        }
        if(strlen(s2) <= i){
            s3[i+t] = s1[i];
            continue;
        }
        s3[i+t] = s1[i];
        s3[i+k] = s2[i];
        ++t; ++k;
    }
    return s3;
}
