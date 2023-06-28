#include <stdlib.h>

unsigned int conta_spazi (const char* s)
{
    unsigned int n = 0;
    for (size_t i = 0; s[i] != 0; ++i) {
        if (s[i] == 0x20){
            ++n;
        }
    }
    return n;
}

int main (void)
{
    char s[] = "prova stringa in cui contare gli spazi" ;
    
    size_t n;
    
    n= conta_spazi(s);
    
    return 0;
}

