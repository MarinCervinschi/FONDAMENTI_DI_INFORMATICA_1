#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void translate(char *str, const char *from, const char *to){
    if(!str || !from || !to || strlen(from) != strlen(to)){
        return;
    }
    
    for (size_t i = 0; i != strlen(str); ++i) {
        size_t t = 0, j = 0;
        for (; t != strlen(from); ++t) {
            if(str[i] == from[t]){
                j++;
                break;
            }
        }
        if(j !=1 ){
            continue;
        }
        str[i] = to[t];
        j--;
    }
    
    
}
int main(void) {
    char s[] = "ciao";
    translate(s, "abdc", "wxzy");
    
    return 0;
}
