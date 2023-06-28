#include "quadrati.h"
#include <stdio.h>
void stampa_quadrato(unsigned int lato){
    for (unsigned int i = 0; i != lato; ++i) {
        printf("*");
    }
    
    for (unsigned int t = 0; t != lato -2; ++t) {
        printf("\n");
        for (unsigned int i = 0; i != lato; ++i) {
            if(i == 0){
                printf("*");
            }
            printf(" ");
            if(i == lato-3){
                printf("*");
            }
        }
    }
    printf("\n");
    for (unsigned int i = 0; i != lato; ++i) {
        printf("*");
    }
}
