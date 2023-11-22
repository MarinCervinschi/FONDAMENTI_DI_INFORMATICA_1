#include <stdlib.h>
#include <stdio.h>
size_t shorten(int *v, size_t n, int max){
    if(!v){
        return 0;
    }
    size_t count = 0;
    for (size_t g = 0, i = 0; g != n; ++g,++i) {
        if(v[i] > max){
            continue;
        }
        ++count;
    }
    size_t m[count];
    for (size_t i = 0 , t = 0; i !=n; ++i) {
        if(v[i] > max){
            continue;
        }
        m[t] = v[i];
        ++t;

    }
   
    n = count;
    
    return n;
}
int main(void) {
    
    int  x[11] = { 5, 1, 7, 9, 11, 3, 8, 2, 1, 3, 5 };
    size_t ret = 0;
    ret = shorten(x, 11, 7);
    
    
    return 0;
}
