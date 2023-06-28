#include <stdlib.h>
#include <string.h>

size_t conta_parole(const char *s)
{
    size_t lungh = strlen(s);
    size_t n = 0;
    if (s[0] != 0x20){
        n=1;
    }
    if (s[0] == 0){
        return 0;
    }
    for (size_t i = 0; i != lungh; ++i) {
        if (s[i] == 0x20) {
            if (s[i+1] != 0x20){
                if (s[i+1] != 0){
                    ++n;
                }
            }
        }
    }
    return n;
}
int main (void)
{
    char s[] = " queste sono 4 parole  ";
    
    size_t n ;
    n = conta_parole(s);
    
    return 0;
}

