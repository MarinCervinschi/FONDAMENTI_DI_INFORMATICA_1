#include <stdlib.h>
#include <stdio.h>
char *trim(const char *s){
    if(s == NULL){
        return NULL;
    }
    size_t num_str_trim = 1;
    
    for (size_t i = 0; s[i] != 0; ++i) { //conto la lunghezza della stringa senza gli spazi iniziali e finali
        if(s[i] != 0x20){//inizio
            while (s[i] != 0x20) {
                ++num_str_trim;
                ++i;
            }
            if(s[i+1] == 0){continue;}
            if(s[i+1] != 0x20){
                ++num_str_trim;
            }
            else{
                size_t num_spaz = 0;
                while (s[i] == 0x20) { //conta spazi
                    ++num_spaz;
                    ++i;
                }
                if(s[i] != 0){
                    num_str_trim += num_spaz;
                    --i;
                }
                }
            }
        }
    
    char *res = calloc(num_str_trim, sizeof(char)); //alloco la memoria
    
    for (size_t i = 0, num = 0; s[i] != 0; ++i) { //copio la stringa
        if(s[i] != 0x20){//inizio
            while (s[i] != 0x20) {
                res[num] = s[i];
                ++num;
                ++i;
            }
            if(s[i+1] == 0){continue;}
            if(s[i+1] != 0x20){
                res[num] = s[i];
                ++num;
            }
            else{
                size_t num_spaz = 0;
                while (s[i] == 0x20) {
                    ++num_spaz;
                    ++i;
                }
                if(s[i] != 0){
                    i -= num_spaz;
                    for (size_t m = 0; m != num_spaz; ++m) {
                        res[num] = s[i];
                        ++num;
                        ++i;
                    }
                    --i;
                }
                }
            }
        }
    printf("%s\n", res);
    return res;
}
int main(void){
    
    char *s = "  test  test  test  ";
    char *res = 0;
    res = trim(s);

    free(res);
    return 0;
    
}

