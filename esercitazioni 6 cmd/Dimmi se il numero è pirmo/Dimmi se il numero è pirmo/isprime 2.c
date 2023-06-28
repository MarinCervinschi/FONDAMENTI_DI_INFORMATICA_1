#include <stdio.h>
#include <stdlib.h>
int primo (unsigned int val)
{
    if (val == 2) {
        return 1;
    }
    if (val == 3) {
        return 1;
    }
    if (val == 5) {
        return 1;
    }
    if (val >1) {
        if (val % 5 != 0){
            if (val % 3 != 0)
                if (val % 2 != 0)
                    return 1;
        }
    }
    return 0;
}
int main(int argc, char * argv[]) {
    
    int n = atoi(argv[1]);
    if (argc != 2 || n < 0) {
        return 1;
    }
    
    int res = primo(n);
    if(res == 1){
        printf("true");
    }
    else{
        printf("false");
    }
    
    return 0;
}
