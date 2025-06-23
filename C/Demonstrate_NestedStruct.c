#include <stdio.h>

struct Address {
char street[50];
char city[50];
char state[50];
int zipCode;
};
struct Student {
    char name[50];
    int rollNumber;
    float marks;
    struct Address address;
};
void inputAddress(struct Address *address) {
    printf("Enter street: ");
    fgets(address->street, sizeof(address->street), stdin);

    printf("Enter city: ");
    fgets(address->city, sizeof(address->city), stdin);

    printf("Enter state: ");
    fgets(address->state, sizeof(address->state), stdin);

    printf("Enter ZIP code: ");
    scanf("%d", &address->zipCode);
    getchar();
}
void inputStudentDetails(struct Student *student) {
    printf("Enter student's name: ");
    fgets(student->name, sizeof(student->name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);

    printf("Enter marks: ");
    scanf("%f", &student->marks);
    getchar();
    printf("Enter address details:\n");
    inputAddress(&student->address);
}
void displayAddress(const struct Address *address) {
    printf("Street: %s", address->street);
    printf("City: %s", address->city);
    printf("State: %s", address->state);
    printf("ZIP Code: %d\n", address->zipCode);
}
void displayStudentDetails(const struct Student *student) {
    printf("\nStudent Information:\n");
    printf("Name: %s", student->name);
    printf("Roll Number: %d\n", student->rollNumber);
    printf("Marks: %.2f\n", student->marks);
    printf("Address:\n");
    displayAddress(&student->address);
}

int main() {
    struct Student student1;
    inputStudentDetails(&student1);
    displayStudentDetails(&student1);

    return 0;
}
