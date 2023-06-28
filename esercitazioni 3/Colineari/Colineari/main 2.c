#include "geometria.h"
int main (void)
{
   
    struct punto p1 = {2. , 2.};

    struct punto p2 = {3. , 3.};

    struct punto p3 = {4. , 4.};
    
    int c = colineari(p1, p2, p3);
    
    return 0;
    
}
