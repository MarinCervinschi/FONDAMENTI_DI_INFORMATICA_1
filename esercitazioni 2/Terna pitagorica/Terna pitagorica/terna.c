#include <stdbool.h>

bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c)
{
    if ( (a*a) + (b*b) == (c*c) ){
        return 1;
    }
    if ( (a*a) + (c*c) == (b*b) ){
        return 1;
    }
    if ( (c*c) + (b*b) == (a*a) ){
        return 1;
    }
    return 0;
}
int main (void)
{
    unsigned int a = 1, b = 2, c = 3;
    unsigned int x = 0;
    x = is_terna_pitagorica(a, b, c);
    
    return 0;
}

