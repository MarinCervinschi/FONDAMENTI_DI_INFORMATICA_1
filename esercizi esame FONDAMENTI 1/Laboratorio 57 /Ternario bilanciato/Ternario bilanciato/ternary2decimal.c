#include <stdio.h>
#include <string.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    if(argc != 2){
        return 1;
    }
    char *più = "+0-";
    int out = 0;
    size_t x = strlen(argv[1])-1;
    for (size_t i = 0; i != strlen(argv[1]); ++i, --x) {
        if(argv[1][i] == più[0]){
            out += 1 * pow(3, x);
            continue;
        }
        if(argv[1][i] == più[1]){
            continue;
        }
        if(argv[1][i] == più[2]){
            out += -1 * pow(3, x);
            continue;
        }
        return 1;
    }
    
    printf("%i\n", out);
    
    
    return 0;
}
