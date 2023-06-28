#include <stdlib.h>
#include <stdio.h>
#include "product.h"

int main(void) {
    FILE *f= fopen("file.txt", "w");
    struct product x = { "289347" , "Pizza Margherita65", 6 };
    struct product x1=   {"67832", "Chicken Nuggets", 5};
    struct product x2= {"563454", "Pizza Quattro Stagioni", 7};
    struct product *h= calloc(3, sizeof(struct product));
    
    h[0] = x;
    h[1] = x1;
    h[2] = x2;
    
    size_t n = 3;
    write_products(f, h, 3);
    
    return 0;
}
