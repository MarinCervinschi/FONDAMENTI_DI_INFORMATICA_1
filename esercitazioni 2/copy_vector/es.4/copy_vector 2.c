#include <stdint.h>
#include <stdlib.h>

extern void copy_vector(uint32_t *dst, uint32_t *src, size_t n)
{
    for (size_t i = 0; i != n; i++) {
        dst[i] = src[i];
    }
}
int main (void)
{
    size_t n = 3;
    uint32_t *dst = malloc(3 * sizeof(uint32_t));
    
    uint32_t *src = malloc(3 * sizeof(uint32_t));
    src[0] = 1;
    src[1] = 2;
    src[2] = 3;
    
    copy_vector(dst, src, n);
    
    free(dst);
    free(src);
    return 0;
}

