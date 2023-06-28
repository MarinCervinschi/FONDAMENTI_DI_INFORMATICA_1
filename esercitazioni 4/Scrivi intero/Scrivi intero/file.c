#include <stdio.h>
#include <stdbool.h>

bool scrivi_intero(const char *filename, int i){
    
    FILE *k = fopen(filename, "w");
    if(k == NULL){
        return 0;
    }
    fprintf(k, "%d\n", i);
    fclose(k);
    
    return 1;
}

int main(void) {
    int i = 10;
    char *s = "file";
    
    scrivi_intero(s, i);
   
    return 0;
}

