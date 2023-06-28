#ifndef libri_h
#define libri_h

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

struct libro {
    char *titolo;
    uint16_t *anni_ristampe;
};
extern bool libro_scrivi(const struct libro *p, FILE *f);

#endif /* libri_h */
