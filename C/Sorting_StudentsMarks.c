#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};
void inputStudentDetails(struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
printf("Enter details for student %d:\n", i + 1);
        
     printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        printf("Roll Number: ");
    scanf("%d", &students[i].rollNumber);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);

    getchar();
    }
        }
void displayStudentDetails(const struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
    printf("\nStudent %d:\n", i + 1);
          printf("Name: %s",students[i].name);
         printf("Roll Number: %d\n",students[i].rollNumber);
           printf("Marks: %.2f\n",students[i].marks);
    }
       }
void sortStudentsByMarks(struct Student students[], int count) {
    struct Student temp;
    for(int i = 0;i<count - 1; i++) {
    for(int j = 0; j < count - i - 1; j++) {
    if(students[j].marks < students[j + 1].marks) {
         temp = students[j];
    students[j] = students[j + 1];
            students[j + 1] = temp;
            }
           }
               }
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
     scanf("%d", &numStudents);
    getchar();

    struct Student students[numStudents];

    inputStudentDetails(students, numStudents);
sortStudentsByMarks(students, numStudents);
 printf("\nSorted Student Information (by Marks):\n");
displayStudentDetails(students, numStudents);

    return 0;
}
