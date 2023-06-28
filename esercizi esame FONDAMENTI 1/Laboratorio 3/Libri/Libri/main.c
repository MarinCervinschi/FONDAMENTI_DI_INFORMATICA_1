#include <stdlib.h>
#include "libri.h"
#include <stdio.h>

int main(void) {
    char *file_name = "libri2.txt";
    unsigned int n = 0;
    
    struct libro *libri = read_libri(file_name, &n);
    
    
    free(libri);
    return 0;
}
