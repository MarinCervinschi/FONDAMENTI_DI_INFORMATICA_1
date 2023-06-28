#include "complessi.h"

void prodotto_complesso (struct complesso *comp1, const struct complesso *comp2)
{
    const double i = 1.;
    double k = 0.;
    
    k = (comp1->re * comp2->re) - (comp1->im * comp2->im);
    comp1->im = i * ((comp1->re * comp2->im) + (comp1->im * comp2->re));
    comp1->re = k;
}
