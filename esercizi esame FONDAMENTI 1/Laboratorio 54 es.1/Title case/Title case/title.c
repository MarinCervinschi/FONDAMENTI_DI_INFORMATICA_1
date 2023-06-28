#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(int argc, const char * argv[]) {
    for (int t = 1; t != argc; ++t) {
        for (size_t i = 0; i != strlen(argv[t]); ++i) {
            if(i+1 == strlen(argv[t])){
                printf("%c", toupper(argv[t][i]));
                continue;
            }
            printf("%c", argv[t][i]);
        }
        if(t+1 == argc){
            break;
        }
        printf(" ");
    }
    printf("\n");
    return 0;
}
