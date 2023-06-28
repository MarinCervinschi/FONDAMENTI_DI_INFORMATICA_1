#include <stdlib.h>

size_t lungh(const char *str)
{
    size_t num = 0;
    size_t i = 0;
    while (str[i] != 0) {
        ++num;
        ++i;
    }
    
    return num;
}
int main (void)
{
    char s[] = "prova";
    
    size_t n;
    
    n = lungh(s);
    
    return 0;
}

