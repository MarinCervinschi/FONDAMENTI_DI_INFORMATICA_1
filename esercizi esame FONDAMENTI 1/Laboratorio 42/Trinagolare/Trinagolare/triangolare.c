#include <stdio.h>
#include <stdbool.h>
bool triangolare(int n){
    if( n <= 0){
        printf("false");
        return false;
    }
    if(n == 1){
        printf("true");
        return true;
    }
    int num = 0;
    for (int i = 1; i != n; ++i) {
        for (int t = 0; t != i; ++t) {
            ++num;
        }
        if(num == n){
            printf("true");
            return true;
        }
    }
    
    printf("false");
    return false;
}
int main(void) {
    int n = 49995001;
    triangolare(n);
    
    return 0;
}
