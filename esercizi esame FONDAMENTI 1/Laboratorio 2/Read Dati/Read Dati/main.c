#include <stdio.h>
#include "dati.h"
#include <stdlib.h>
int main(void) {
    char *nome_file = "dati1-2.txt";
    unsigned int num_dati = 0;
    
    struct dato *dati = read_dati(nome_file, &num_dati);
    free(dati);
    return 0;
}
