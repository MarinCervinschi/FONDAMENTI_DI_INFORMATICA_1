unsigned int inverti (unsigned int i){
    int reverse = 0;
    
    while (i != 0) {
        reverse = reverse * 10 + i % 10;
        i /= 10;
    }
    return reverse;
}
