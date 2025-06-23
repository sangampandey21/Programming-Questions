#include <stdio.h>

struct Address {
char street[50];
char city[50];
char state[50];
};
struct Employee {
char name[50];
int id;
float salary;
struct Address address;  
};
struct Department {
    char name[50];
    struct Employee manager;
};
struct Company {
    char name[50];
    struct Department department; 
};
void inputAddress(struct Address *address) {
    printf("Enter road: ");
    fgets(address->street, sizeof(address->street), stdin);

    printf("Enter city: ");
    fgets(address->city, sizeof(address->city), stdin);

    printf("Enter state: ");
    fgets(address->state, sizeof(address->state), stdin);
    getchar();
}
void inputEmployee(struct Employee *employee) {
    printf("Enter employee's name: ");
    fgets(employee->name, sizeof(employee->name), stdin);

    printf("Enter employee ID: ");
    scanf("%d", &employee->id);

    printf("Enter employee salary: ");
    scanf("%f", &employee->salary);

    getchar();

    // Input address details
    printf("Enter address details:\n");
    inputAddress(&employee->address);
}
void inputDepartment(struct Department *department) {
    printf("Enter department name: ");
    fgets(department->name, sizeof(department->name), stdin);
    printf("Enter manager details:\n");
    inputEmployee(&department->manager);
}
void inputCompany(struct Company *company) {
    printf("Enter company name: ");
    fgets(company->name, sizeof(company->name), stdin);
    printf("Enter department details:\n");
    inputDepartment(&company->department);
}

void displayAddress(const struct Address *address) {
    printf("Street: %s",address->street);
    printf("City: %s",address->city);
    printf("State: %s",address->state);
}
void displayEmployee(const struct Employee *employee) {
    printf("Name: %s",employee->name);
    printf("ID: %d\n",employee->id);
    printf("Salary: %.2f\n",employee->salary);
    printf("Address:\n");
    displayAddress(&employee->address);
}
void displayDepartment(const struct Department *department) {
    printf("Department Name: %s", department->name);
    printf("Manager Details:\n");
    displayEmployee(&department->manager);
}
void displayCompany(const struct Company *company) {
    printf("Company Name: %s", company->name);
    printf("Department Details:\n");
    displayDepartment(&company->department);
}
int main() {
    struct Company company1;
    inputCompany(&company1);
    printf("\nCompany Information:\n");
    displayCompany(&company1);

    return 0;
}
