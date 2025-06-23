#include <stdio.h>
#include <string.h>
struct Employee {
    int id;
    char name[50];
    float salary; 
      }  ;
void inputEmployee(struct Employee *employee) {
 printf("Enter employee ID: ");
scanf("%d",&employee->id);
 getchar();

 printf("Enter employee name: ");
  fgets(employee->name, sizeof(employee->name), stdin);
size_t len=strlen(employee->name);
    if (len > 0 && employee->name[len - 1] == '\n') {
 employee->name[len - 1] = '\0';
    }
printf("Enter employee salary: ");
 scanf("%f", &employee->salary);
}
void displayEmployee(const struct Employee *employee) {
    printf("\nEmployee Details:\n");
    printf("ID: %d\n", employee->id);
    printf("Name: %s\n", employee->name);
    printf("Salary: %.2f\n", employee->salary);
   }
int findEmployeeById(const struct Employee employees[], int count, int id, struct Employee *result) {
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            *result = employees[i];
            return 0;
         }
          }
    return 0;
}int main() {
int numEmployees;
     printf("Enter the number of employees: ");
scanf("%d", &numEmployees);
struct Employee employees[numEmployees];
 for (int i = 0; i < numEmployees; i++) {
    printf("\nEnter details for employee %d:\n", i + 1);
    inputEmployee(&employees[i]);
    }
    printf("\nAll Employee Details:\n");
    for(int i=0;i<numEmployees;i++) {
        displayEmployee(&employees[i]);
    }
    int searchId;
    struct Employee foundEmployee;
    printf("\n Enter employee ID to search: ");
    scanf("%d",&searchId);
    if (findEmployeeById(employees, numEmployees, searchId, &foundEmployee)) {
        printf("\nEmployee with ID %d found:\n", searchId);
        displayEmployee(&foundEmployee);
         } else {
        printf("\nEmployee with ID %d not found.\n", searchId);
                }

    return 0;
}
