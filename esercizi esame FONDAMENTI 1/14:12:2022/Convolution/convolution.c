#include <stdlib.h>
int *convolution3(const int *v, size_t lenv, const int k[3]){
    if( v ==  NULL|| k == NULL){
        return NULL;
    }
    int *res = calloc(lenv, sizeof(int));
    for (size_t n = 0; n != lenv; ++n) {
        int val = 0;
        for (size_t m = 0; m != 3 ; ++m) {
            size_t g = n + 1 - m;
            if( g < 0 || g >= lenv){
                continue;
            }
            val += v[g] * k[m];
        }
        res[n] = val;
    }
    
    return res;
}
int main(void) {
    
    int v[7] = { 1, 2, 3, 4, 3, 2, 1 };
    int k[3] = { -1, 2, -1 };
    size_t lenv = 7;
    int *res = convolution3(v, lenv, k);
    
    
    free(res);
    return 0;
}
