#include <stdio.h>
#include <stdlib.h>
size_t find_first_partition(const int *seq, size_t n){
    if(seq == NULL || n == 0){
        return 0;
    }
    size_t ret = 0;
    for (size_t i = 0, t = 0; i != n; ++i) {
        if(seq[t] < seq[i]){
            for (size_t s = i; s != n; ++s) {
                if(seq[i-1] < seq[s]){
                    return 0;
                }
            }
            ret = i;
            for (size_t g = i; i != n; ++i) {
                if(seq[g] > seq[i]){
                    break;
                }
            }
            --i;
            t = i;
            continue;
        }
        else{
            ret = n;
        }
    }
    
    return ret;
}
int main(void) {
    
    int seq[] = { 5,1,4,3,6,8,10,7,9};
    size_t n = 9;
    
    size_t ret = find_first_partition(seq, n);
    
    
    return 0;
}
