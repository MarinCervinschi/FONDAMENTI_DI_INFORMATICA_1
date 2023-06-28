#include <stdio.h>

int main (void){
    
    char *file_name = "BoardingCard.pdf";
    FILE *pdf = fopen(file_name, "rb");
    
    fseek(pdf, 0, SEEK_END);
    long size = ftell(pdf);
    rewind(pdf);
    
    printf("la dimensione di %s è: %li byte\n", file_name, size);
    
    fclose(pdf);
    
    return 0;
}

