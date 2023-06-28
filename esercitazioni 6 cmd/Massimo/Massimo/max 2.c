#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]) {
   
    if(argc == 1){
        return 1;
    }
    int max = 0;
    
    for (int i = 0; i < argc; ++i) {
        
        int n = atoi(argv[i]);
        int m = 0;
        if(i+1 == argc){
            continue;
        }
        m = atoi(argv[i + 1]);
        if(n < m){
            max = m;
        }
    }
    if (max == 0) {
        return 1;
    }
    printf("%d", max);
    
    return 0;
}
