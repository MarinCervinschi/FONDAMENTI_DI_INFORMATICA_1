#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    if(argc != 2){
        return -1;
    }
    int n = atoi(argv[1]);
    if(n <= 0){
        return 0;
    }
    if(n == 1){
        printf("%d", n);
        return 1;
    }
    printf("%d, ", n);
    int num_seq = 1;
    while (1) {
        if(n % 2 == 0){
            n /= 2;
            if(n == 1){
                printf("%d", n);
                ++num_seq;
                break;
            }
            printf("%d, ", n);
            ++num_seq;
        }
        else{
            n = 3 * n + 1;
            if(n == 1){
                printf("%d", n);
                ++num_seq;
                break;
            }
            printf("%d, ", n);
            ++num_seq;
        }
        
    }
    
    return num_seq;
}
