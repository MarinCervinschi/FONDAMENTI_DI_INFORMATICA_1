#ifndef DATI_H
#define DATI_H

#include <stdio.h>
struct dato {
    double valore;
    unsigned classe;
};

extern struct dato *read_dati(const char *filename, unsigned int *pn);

#endif /* DATI_H */
