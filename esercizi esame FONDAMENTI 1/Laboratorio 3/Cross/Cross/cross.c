#include <stdio.h>
void stampa_cross(unsigned int n){
    if(n== 0){
        printf("x");
        return;
    }
    
    for (unsigned int i = 0; i != n; ++i){
        for (unsigned int t = 0; t != i; ++t) {
            printf(" ");
        }
        if(i == 0){
            printf("\\");
            for (unsigned int h = 0; h != n*2-1; ++h) {
                printf(" ");
            }
            printf("/\n");
            continue;
            }
        
        printf("\\");
        for (unsigned int t = 0; t != (n*2-i*2)-1; ++t) {
            printf(" ");
        }
        printf("/\n");
        
    }
    
    for (unsigned int t = n+1; t != 0; --t) {
        for (unsigned int k = 0; k != t-1; ++k) {
            printf(" ");
        }
        if(n-t+1 == 0){
            printf("x\n");
            continue;
        }
        printf("/");
        
        
        for (unsigned int p = 0; p != (n*2-t*2)+1; ++p) {
            printf(" ");
        }
        printf("\\\n");
        
    }
    
}

/*int main(void) {
    unsigned int n = 5;
    stampa_cross(n);
    return 0;
}*/
