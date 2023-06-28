#include <stdio.h>
struct person {
    char name[256];
    unsigned int age;
};
void person_read (FILE *f, struct person *pp){
    
    fscanf(f, "%s", pp->name);
    fscanf(f, "%u", &pp->age);
}
int main(void) {
    FILE *f = fopen("person2.txt", "r");
    struct person pp;
    person_read(f, &pp);
    fclose(f);

    
    return 0;
}
