#include "dati.h"
int main (void) {
    char *file_name = "file.bin";
    struct dato x[] = { {0.1,0}, {1.45,2}, {0.81,0} };
    salva_conteggio_bin(file_name,x,3);
    
    return 0;
}
