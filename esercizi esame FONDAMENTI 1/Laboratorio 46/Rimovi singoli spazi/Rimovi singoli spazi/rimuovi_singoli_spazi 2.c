#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *rimuovi_singoli_spazi(const char *s){
    char *out = calloc(strlen(s)+1, sizeof(char));
    size_t num_new_str = 0;
    for (size_t i = 0, t = 0; i != strlen(s)+1; ++i) {
        if(s[i] == 0){
            break;
        }
        else if (s[i+1] == 0){
            break;
        }
        if(s[i] != 0x20){
            out[t] = s[i];
            ++num_new_str;
            ++t;
        }
        else {
            if(s[i+1] == 0x20){
                out[t] = 0x20;
                out[t+1] = 0x20;
                t += 2;
                num_new_str += 2;
                continue;
            }
            out[t] = s[i+1];
            ++num_new_str;
            ++t; ++i;
        }
    }
    out = realloc(out, num_new_str * sizeof(char));
    out[num_new_str] = 0;
    return out;
}
int main(void) {
    
    char *s = rimuovi_singoli_spazi("  a  b  c  ");
    free(s);
    return 0;
}
