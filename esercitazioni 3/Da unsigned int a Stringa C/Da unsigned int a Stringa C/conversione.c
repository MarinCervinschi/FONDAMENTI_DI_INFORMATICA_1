#include <stdlib.h>
#include <string.h>
#include <stdint.h>
char *converti(unsigned int n)
{
    size_t i= 0;;
    unsigned int t = n;
    if(t % 10 == 0){
        i = 1;
        t /= 10;
    }
    for (;t / 10 != t; ++i) {
        t /= 10;
    }
    
    char *k = malloc((i + 1) * sizeof(char));
    
    for (;0 != i; --i) {
        k[i-1]= n % 10;
        n /= 10;
        
    }
    return k;
}
int main (void)
{
    unsigned int n = 123456;
    
    char *k = converti(n);
    
    free(k);
    return 0;
}
