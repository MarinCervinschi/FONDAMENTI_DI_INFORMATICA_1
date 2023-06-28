#include "bcd.h"

unsigned short bin2bcd(unsigned short val)
{
    if (val > 9999) {
        val %= 10000;
    }
    
    unsigned short x3 = val % 10;
    val /= 10;
    unsigned short x2 = val % 10;
    val /= 10;
    unsigned short x1 = val % 10;
    val /= 10;
    unsigned short x0 = val % 10;
    val /= 10;

    x0 <<= 4;
    x0 += x1;
    x0 <<= 4;
    x0 += x2;
    x0 <<= 4;
    x0 += x3;
    
    
    return x0;
}
