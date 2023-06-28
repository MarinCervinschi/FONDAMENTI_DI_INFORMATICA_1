#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *concatena(const char *s1, const char *s2){
    size_t num_len_1 = strlen(s1);
    size_t num_len_2 = strlen(s2);
    
    char *s3 = calloc((num_len_1+num_len_2+1) , sizeof(char));
    for (size_t i = 0; i != num_len_2+num_len_1; ++i) {
        if(i < num_len_1){
            s3[i] = s1[i];
        }
        else{
            s3[i] = s2[i-num_len_1];
        }
    }
    return s3;
}
int main(void) {
    char *s1 = "prova";
    char *s2 = "test";
    
    char *s3;
    s3 = concatena(s1, s2);
    
    free(s3);
    return 0;
}
