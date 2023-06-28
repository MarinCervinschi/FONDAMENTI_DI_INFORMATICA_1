int prossimo_primo(unsigned int x)
{

    while (x != 0) {
        x += 1;

        if (x == 2) {
            return 2;
        }
        if (x == 3) {
            return 3;
        }
        if (x == 5) {
            return 5;
        }
        if (x > 1) {
            if (x % 5 != 0) {
                if (x % 3 != 0)
                    if (x % 2 != 0)
                        return x;
            }
        }
    }

    return 0;
}
/*int main(void)
{
    unsigned int x = 7;
    unsigned char F;
    F = prossimo_numero_primo(x);
    return 0;
}
*/
