#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    void inputDetails() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
 void displayDetails() const {
        cout << "Student's Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student;
    student.inputDetails();
    student.displayDetails();
    
    return 0;
}
