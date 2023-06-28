#include <stdio.h>

unsigned int count_teenagers (FILE *f){
    struct person {
        char name[256];
        unsigned int age;
    };
    struct person p;
    unsigned int count = 0 ,num_person;
    fscanf(f,"%u", &num_person);
    
    for (unsigned int i = 0; i != num_person; ++i) {
        fscanf(f, "%s", p.name);
        fscanf(f, "%u", &p.age);
        
        if(13<= p.age){
            if(p.age <= 19){
                ++count;
            }
            continue;
        }
    }
    
    return count;
}
int main(int argc, const char * argv[]) {
    FILE *f = fopen("people2.txt", "r");
    count_teenagers(f);
    
    fclose(f);
    return 0;
}
