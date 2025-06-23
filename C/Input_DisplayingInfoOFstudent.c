#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
void inputStudentDetails(struct Student *student) {
    printf("Enter student's name: ");
    
    fgets(student->name, sizeof(student->name), stdin);

    printf("Enter student's roll number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter student's marks: ");
    scanf("%f", &student->marks);
    getchar();
}

void displayStudentDetails(const struct Student *student) {
    printf("\nStudent Information:\n");
    printf("Name: %s", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Marks: %.2f\n", student->marks);
}
int main() {
    struct Student student1;
    inputStudentDetails(&student1);
    displayStudentDetails(&student1);

    return 0;
}
