#include "alterna.h"
#include <stdlib.h>
int main(void) {
    char *s1 = "";
    char *s2 = "12345";
    
    char *s3 = alterna(s1, s2);
    
    free(s3);
    return 0;
}
