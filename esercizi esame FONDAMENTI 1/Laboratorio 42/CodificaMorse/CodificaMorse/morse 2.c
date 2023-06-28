#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *codifica_morse(const char *testo){
    if(testo == NULL){
        return NULL;
    }
    char *codifica = calloc(strlen(testo) * 5+1, 1);
    char *str[] = {"._ ", "_... ","_._. ", "_.. ", ". ", ".._. ", "--. ",   ".... ", ".. ", ".___ ", "_._ ","._.. ", "__ ","_. ","___ ", ".__. ", "__._ ","._. ", "... ","_ ",".._ ","..._ ", ".__ ", "_.._ ", "_.__ ","__.. " };
    
   
    for (int i = 0; testo[i] != 0; ++i) {
        if(testo[i] == 0x20){
            strcat(codifica, "/ ");
        }
        else{
            strcat(codifica, str[testo[i] - 'A']);
        }
    }
    if(strlen(codifica) > 0){
        codifica[strlen(codifica)-1] = 0;
    }
    return codifica;
}
int main(void) {
    char *s = "CIAO MAMMA";
    
    char *codifica = codifica_morse(s);
    
    free(codifica);
    return 0;
}
