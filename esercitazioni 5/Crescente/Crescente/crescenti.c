#include <stdio.h>
#include <stdbool.h>
bool crescente(unsigned int x){
    unsigned int y = x % 10;
    x /= 10;
    while (x != 0) {
        if (y < x % 10) {
            return false;
        }
        y = x % 10;
        x /= 10;
    }
    return true;
}

//int main(void) {
//    if (crescente(12345)) {
//        printf("Il numero è crescente!\n");
//    }else {
//        printf("Il numero NON è crescente!\n");
//    }
//    return 0;
//}
