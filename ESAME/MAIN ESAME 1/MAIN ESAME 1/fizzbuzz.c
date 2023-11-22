#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    if (argc != 2) {
        return 1;
    }
    int n = atoi(argv[1]);
    if(!n){
        return 1;
    }
    if(n == 0){
        return 1;
    }
    for (int i = 1; i != n+1; ++i) {
        if(i % 3 == 0 && i % 5 != 0){
            printf("Fizz\n");
            continue;
        }
        if(i % 3 != 0 && i % 5 == 0){
            printf("Buzz\n");
            continue;
        }
        if(i % 3 == 0 && i % 5 == 0){
            printf("Fizzbuzz\n");
            continue;
        }
        
        printf("%i\n", i);
    }
    
    return 0;
}
