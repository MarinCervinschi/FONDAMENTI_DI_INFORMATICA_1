#include <stdint.h>
#include <stdlib.h>
#include <string.h>

char *concatena(const char *prima, const char *seconda)
{
    size_t n= 0;
    
     
    if (prima == NULL){
        if (seconda == NULL){
            return 0;
        }
        n = strlen(seconda)+ 1;
        char *s = malloc(n * sizeof(char));
        for (size_t i = 0; i != n; ++i) {
            if(seconda[i] != 0){
                s[i] = seconda[i];
                
            }
        }
        return s;
    }
    
    else{
        if (seconda == NULL)
        {
            if (seconda == NULL){
                return 0;
            }
            n = strlen(prima)+ 1;
            char *s = malloc(n * sizeof(char));
            for (size_t i = 0; i != n; ++i) {
                if(prima[i] != 0){
                    s[i] = prima[i];
                    
                }
            }
            return s;
        }
    else{
        if(prima[0] == 0){
            n = strlen(seconda)+ 1;
            char *s = malloc(n * sizeof(char));
            for (size_t i = 0; i != n; ++i) {
                if(seconda[i] != 0){
                    s[i] = seconda[i];
                            
                }
            }
            return s;
        }
    else{
        if(seconda[0] == 0){
            n = strlen(prima) + 1;
            char *s = malloc(n * sizeof(char));
            for (size_t i = 0; i != n; ++i) {
                if(prima[i] != 0){
                    s[i] = prima[i];
                    
                }
            }
            return s;
        }
    else{
        n = strlen(prima) + strlen(seconda) + 1;
        char *s = malloc(n * sizeof(char));
        for (size_t i = 0; i != n; ++i) {
            if(prima[i] != 0){
                s[i] = prima[i];
            }
            else{
                for (size_t k = 0; seconda[k] != 0; ++k) {
                    s[i] = seconda[k];
                    ++i;
                }
            }
        }
        return s;
    }
}
}
}
}

int main (void)
{
    char s1[] = "Altro ";
    char s2[] = "esempio normale.";
    char *s;
    
    s = concatena(s1, s2);
    free(s);
}

