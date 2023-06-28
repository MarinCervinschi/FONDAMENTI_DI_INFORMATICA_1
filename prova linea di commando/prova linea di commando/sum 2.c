#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int somma = 0;
    for (int i = 1; i < argc; ++i) {
        char *endptr;
        long int val = strtol(argv[i], &endptr, 10);
        if(*endptr == 0){
            somma += val;
        }
    }

    printf("%d\n", somma);
    return 0;
}
