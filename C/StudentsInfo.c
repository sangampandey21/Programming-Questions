#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student student1;
    printf("Enter student's name: ");
    fgets(student1.name, sizeof(student1.name), stdin);

    printf("Enter student's roll number: ");
    scanf("%d", &student1.rollNumber);

    printf("Enter student's marks: ");
    scanf("%f", &student1.marks);
    
    printf("\nStudent's Information:\n");
    printf("Name: %s", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
