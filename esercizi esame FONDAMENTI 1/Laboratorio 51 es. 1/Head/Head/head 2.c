#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    if (argc != 2) {
        return 1;
    }
    FILE *f = fopen(argv[1], "r");
    if(f== NULL){
        return 1;
    }
    char s[1000];
    int line_count = 0 ;
    
    while (fgets(s, sizeof(s), f) != NULL && line_count != 10) {
        printf("%s", s);
        ++line_count;
    }
    if(line_count < 10){
        printf("\n");
    }
    
    fclose(f);
    return 0;
}
