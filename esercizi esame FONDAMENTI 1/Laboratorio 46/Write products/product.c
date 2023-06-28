#include "product.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void write_products(FILE *f, const struct product* list, size_t n){

    fputs("[\n", f);
    if(n== 0){
        fputs("]", f);
        return;
    }

    for (size_t i = 0; i != n; ++i) {
        char price[255];
        sprintf(price, "%d", list[i].price);
        fputs("         {\n", f);
        fputs("                \"productId\": \"", f);
        fwrite(list[i].productId, sizeof(char),strlen(list[i].productId), f);
        fputs("\",\n", f);
        fputs("                \"fullName\": \"", f);
        fwrite(list[i].fullName, sizeof(char),strlen(list[i].fullName), f);
        fputs("\",\n", f);
        fputs("                \"price\": ", f);
        fwrite(price, sizeof(char),strlen(price), f);
        fputs("\n         }", f);
        if(i+1 != n){
            fputs(",\n", f);
        }
    }
    fputs("\n]", f);
}
