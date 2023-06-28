#include <stdio.h>
#include <stdlib.h>

int main (void){
    int x = 266;
    char s[] = "prova";
    FILE *f;
    
    // modalità testo = modalità in cui se provo a scrivere
    // un byte che vale 10 sul file in realtà scrivo un 13 e un 10 sotto windows
    f = fopen("out1", "w");
    fprintf(f, "%i\n%s", x, s);//'2' '6' '6' (asci) in hex 32 36 38 0a 'p' 'r' 'o' 'v' 'a'
    fclose(f);
    
    f = fopen("out2", "wb");
    fprintf(f, "%i\n%s",x, s);
    fclose(f);
    
    f = fopen("out3", "w");
    fwrite(&x, sizeof(x), 1, f);// 266 in hex 0a010000
    fwrite(&s, sizeof(s), 1, f);
    fclose(f);
    
    f = fopen("out4", "wb");
    fwrite(&x, sizeof(x), 1, f);
    fwrite(&s, sizeof(s), 1, f);
    fclose(f);
    
    return 0;
}
