#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1;
    
    struct Person *ptr;
    ptr = &person1;
    strcpy(ptr->name, "Samsung");
    ptr->age = 12;
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);

    strcpy(ptr->name, "Sangam");
    ptr->age = 21;
    printf("Modified Name: %s\n", ptr->name);
    printf("Modified Age: %d\n", ptr->age);

    return 0;
}
