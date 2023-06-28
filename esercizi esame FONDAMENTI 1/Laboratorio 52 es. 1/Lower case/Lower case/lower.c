#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    if (argc < 1) {
        return 1;
    }
    FILE *f = fopen(argv[1], "r");
    if(f == NULL){
        return 1;
    }
    int c;
    while ((c = fgetc(f)) != EOF) {
        printf("%c", tolower(c));
    }
    fclose(f);
    return 0;
}
