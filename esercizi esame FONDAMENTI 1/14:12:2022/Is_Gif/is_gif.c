#include "is_gif.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
bool is_gif(const char *filename){
    FILE *f = fopen(filename, "rb");
    if (!f) {
        return false;
    }
    char r[7] = { 0 };
    while (fread(r, 6, 1, f) != 1) {
        return false;
    }
    char *gif87 = "GIF87a";
    char *gif89 = "GIF89a";
    if(strcmp(r, gif87) != 0){
        if(strcmp(r, gif89) != 0){
            fclose(f);
            return false;
        }
        else{
            fclose(f);
            return true;
        }
    }
    
    fclose(f);
    
    return true;
}


