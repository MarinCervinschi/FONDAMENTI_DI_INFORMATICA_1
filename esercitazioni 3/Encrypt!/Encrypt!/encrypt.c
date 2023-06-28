void encrypt(char *s, unsigned int n)
{
    for (unsigned int i = 0 ; i != n; ++i) {
        s[i] = (s[i] ^ 0xAA);
    }
}
int main (void)
{
    char s[5] = "ciao";
    encrypt(s, 5);
    
}
