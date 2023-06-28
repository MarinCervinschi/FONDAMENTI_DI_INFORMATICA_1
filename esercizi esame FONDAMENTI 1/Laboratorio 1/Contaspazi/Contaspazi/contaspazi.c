unsigned int conta_spazi (const char* s){
    
    unsigned int res = 0;
    for (int i = 0; s[i] != 0; ++i) {
        if (s[i] == 0x20) {
            ++res;
        }
    }
    return res;
}
int main(void){
    char *s = "prova stringa in cui contare gli spazi";
    unsigned int res;
    res = conta_spazi(s);
    
    return 0;
}
