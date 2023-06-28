#include <stdio.h>
#include "array_rotate.h"
#include <stdlib.h>
int main(void) {
    size_t len = 4, r = 3;
    int vec[4] = { 1, 2, 3, 4};

    int *ret = rotate(vec, len, r);
    free(ret);
    return 0;
}
