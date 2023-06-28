#include <stdio.h>
#include "images.h"
int main(void) {

    char *s = "file1.txt";
    size_t n = 0;
    
    struct image *ret = read_images(s, &n);
    
    free(ret);
    return 0;
}
