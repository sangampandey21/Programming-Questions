#include <iostream>
#include <string>
#include <vector>
#include <exception>
using namespace std;

// Template class for Data Manipulation
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

// Base Class for Person
class Person {
protected:
    string name;
    int age;

public:
    Person(const string& name = "", int age = 0) : name(name), age(age) {}

    virtual void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    virtual ~Person() {}
};

// Derived Class for Student
class Student : public Person {
private:
    string studentID;
    string course;

public:
    Student(const string& name, int age, const string& studentID, const string& course)
        : Person(name, age), studentID(studentID), course(course) {}

    void display() const override {
        cout << "Student ID: " << studentID << ", Name: " << name
             << ", Age: " << age << ", Course: " << course << endl;
    }

    string getID() const {
        return studentID;
    }

    bool operator==(const Student& other) const {
        return studentID == other.studentID;
    }
};

int main() {
    vector<Student> students;

    try {
        // Adding students
        DataHandler<Student>::add(students, Student("Alice", 20, "S101", "Computer Science"));
        DataHandler<Student>::add(students, Student("Bob", 22, "S102", "Mechanical Engineering"));
        DataHandler<Student>::add(students, Student("Charlie", 21, "S103", "Electrical Engineering"));

        // Displaying all students
        cout << "All Students:\n";
        DataHandler<Student>::display(students);

        // Searching for a student
        string searchID = "S102";
        cout << "\nSearching for student with ID: " << searchID << endl;
        Student found = DataHandler<Student>::find(students, Student("", 0, searchID, ""));
        cout << "Found Student:\n";
        found.display();

    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}