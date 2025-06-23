#include <iostream>
#include <string>
#include <vector>
#include <exception>
using namespace std;

template <typename T>
class DataHandler {
public:
    static void display(const vector<T>& data) {
        for (const auto& item : data) {
            cout << item << endl;
        }
    }

    static void add(vector<T>& data, const T& item) {
        data.push_back(item);
    }

    static T find(const vector<T>& data, const T& key) {
        for (const auto& item : data) { 
            if (item == key) {
                return item;
            }
        }
        throw runtime_error("Item not found");
    }
};

// Class for Person
class Employee {
protected:
    string name;
    int age;

public:
    Employee(const string& name = "", int age = 0) : name(name), age(age) {}

    virtual void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    virtual ~Employee() {}
};

// Derived Class for Employee
class Employee : public Person {
private:
    string EmployeeID;
    string age;

public:
    Employee(const string& name, int age, const string& employeeID, const string& age)
        : Person(name, age), EmployeeID(Employee){}

    void display() const override {
        cout << "Employee ID: " << employeeID << ", Name: " << name
             << ", Age: " << age , << endl;
    }

    string getID() const {
        return employeeID;
    }

    bool operator==(const Employee& other) const {
        return employeeID == other.employeeID;
    }
};

int main() {
    vector<Employee>;

    try {
        DataHandler<Student>::add(employee, Employee("Rohan", 20, "S101"));
        DataHandler<Student>::add(employee, Employee("Sohan", 22, "S102"));
        DataHandler<Student>::add(empolyee, Employee("Mohan", 21, "S103"));

        cout << "All Employees:\n";
        DataHandler<>::display(employee);

        string searchID = "S102";
        cout << "\nSearching for employee with ID: " << searchID << endl;
        Employee found = DataHandler<Student>::find(employee, Employee("", 0, searchID, ""));
        cout << "Found Employee:\n";
        found.display();

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}