#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int ord(char c) {
    return (int)c;
}


void stringa(const char * argv[]){
    for (int j = 0; j != strlen(argv[1]); ++j) {
        int n = ord(argv[1][j]);
        int *bin = calloc(32, sizeof(int));
        size_t num = 0;
        size_t i =0;
        while (n != 0) {
            bin [i] = n % 2;
            ++i;
            n /= 2;
            ++num;
        }
        for (size_t i = 0, k = num-1; i != num; ++i) {
            printf("%d", bin[k]);
            --k;
        }
        if(j+1 != strlen(argv[1])){
            printf(" ");
        }
        free(bin);
    }
}



int main(int argc, const char * argv[]) {
    int n = atoi(argv[1]);
    if (argc != 2 || n < 0) {
        return 1;
    }
    if(n == 0){
        stringa(argv);
        printf("\n");
        return 0;
    }
    int *bin = calloc(32, sizeof(int));
    size_t num = 0;
    size_t i =0;
    while (n != 0) {
        bin [i] = n % 2;
        ++i;
        n /= 2;
        ++num;
    }
    for (size_t i = 0, k = num-1; i != num; ++i) {
        printf("%d", bin[k]);
        --k;
    }
    free(bin);
    printf("\n");
    return 0;
}
