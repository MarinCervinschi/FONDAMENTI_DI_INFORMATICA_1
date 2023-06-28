unsigned int somma_cifre (unsigned int x)
{
    unsigned int F = 0;
    unsigned int t = 0;
    
    while (x / 10 != 1) {
        while (x % 10 == 0) {
            t = x % 10;
            x /= 10;
            F += t;
            if (x == 0) {
                return F;
            }
        }
        
        while (x%10 != 0) {
            t = x % 10;
            x /= 10;
            F += t;
        }
    }
    return F;
}
/*int main (void)
{
    unsigned int x= 123;
    unsigned int F;
    F= somma_cifre(x);
    
    return 0;
    
}
*/
