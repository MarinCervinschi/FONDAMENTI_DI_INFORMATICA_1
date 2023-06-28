#include <stdio.h>
#include "libri.h"
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char *file_name = "libri2.txt";
    unsigned int n = 0;
    struct libro *libri = read_libri(file_name, &n);
    
    char *cerca = "uomo";
    struct libro *filtro = filtra_libri(libri, &n, cerca);
    
    free(filtro);
    free(libri);
    return 0;
}
