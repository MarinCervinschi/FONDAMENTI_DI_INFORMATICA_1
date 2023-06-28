#include <stdio.h>
#include <string.h>
void stampa_cornicetta(const char *s){
    
    size_t num_str = strlen(s);
    printf("/");
    for (size_t i = 0; i != (num_str+2); ++i) {
        printf("-");
    }
    printf("\\\n");
    printf("| %s |\n", s);
    printf("\\");
    for (size_t i = 0; i != (num_str+2); ++i) {
        printf("-");
    }
    printf("/\n");
}
int main(void) {
    char *s = "Fondamenti di informatico 2022";
    stampa_cornicetta(s);
    
    return 0;
}
