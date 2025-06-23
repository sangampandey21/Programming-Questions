#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    Person(const string& n = "", int a = 0) : name(n), age(a) {}
    void setPersonDetails(const string& n, int a) {
        name = n;
        age = a;
    }
    void displayPersonDetails() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Employee {
protected:
    int employeeId;
    double salary;
public:
    Employee(int id = 0, double s = 0.0) : employeeId(id), salary(s) {}
    void setEmployeeDetails(int id, double s) {
    employeeId = id;
     salary = s;
    }
void displayEmployeeDetails() const {
    cout << "Employee ID: " << employeeId << endl;
      cout << "Salary: " << salary << endl;
    }
};
class Manager : public Person, public Employee {
private:
    string department;
public:
    // Constructor
    Manager(const string& n, int a, int id, double s, const string& d)
        : Person(n, a), Employee(id, s), department(d) {}

    void setManagerDetails(const string& n, int a, int id, double s, const string& d) {
        setPersonDetails(n, a);
        setEmployeeDetails(id, s);
        department = d;
    }
    void displayManagerDetails() const {
        displayPersonDetails();
        displayEmployeeDetails();
        cout << "Department: " << department << endl;
       }
};
int main() {
    // Create 
    Manager mgr("Sangam", 21, 12345, 175000.0, "Computer Science");
//Display
    mgr.displayManagerDetails();
return 0;
}
