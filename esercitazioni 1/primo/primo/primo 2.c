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
/*int main (void)
{
    unsigned int val=6;
    unsigned char F= 0;
    F= primo(val);
    return 0;
}
*/
