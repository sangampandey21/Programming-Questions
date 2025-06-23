#include <stdio.h>
#define MAX_STUDENTS 50

struct Student {
 char name[50];
 int rollNumber;
 float marks;
     };
void inputStudentDetails(struct Student students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter details of student %d: \n", i + 1);
    printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
       printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
    printf("Marks: ");
     scanf("%f", &students[i].marks);
        getchar();
    }
      }
   struct Student findTopStudent(struct Student students[], int count) {
      struct Student topStudent = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
      }
 return topStudent;
}
void displayStudentDetails(const struct Student *student) {
    printf("\nStudent Information:\n");
     printf("Name:  %s", student->name);
printf("Roll Number:  %d\n",student->rollNumber);
    printf("Marks:  %.2f\n",student->marks);
}
int main() {
int numStudents;
printf("Enter no. of students: ");
scanf("%d", &numStudents);

getchar();
    if(numStudents>MAX_STUDENTS)           {
    printf("Number of students exceeds the maximum allowed (%d).\n", MAX_STUDENTS);
     return 1;
    }
struct Student students[MAX_STUDENTS];
inputStudentDetails(students, numStudents);
    struct Student topStudent = findTopStudent(students, numStudents);
       printf("\nTop Student:\n");
    displayStudentDetails(&topStudent);

    return 0;
}
