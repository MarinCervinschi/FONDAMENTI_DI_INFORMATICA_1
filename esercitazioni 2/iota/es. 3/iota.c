#include <stdint.h>
#include <stdlib.h>

extern void iota(uint32_t *x, size_t n)
{
    if (x == NULL)
       {
           return;
       }
    for (uint32_t i = 0; i != n; i++) {
            x[i] = i;
        }
    }

int main(void)
{
    size_t n = 3;
    uint32_t *v = malloc(3* sizeof(uint32_t));
    v[0] = 12;
    v[1] = 59;
    v[2] = 83;
        
    iota(v, n);

    free(v);
    return 0;
}

