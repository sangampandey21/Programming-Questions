#include <iostream>
using namespace std;

class Person {
private:
    string name;

public:
    Person(const string& n) : name(n) {
        cout << "Person " << name << " is created." << endl;
    }
    ~Person() {
        cout << "Person " << name << " is destroyed." << endl;
    }
};

int main() {
    Person p1("Ramuu");
{
        Person p2("shyam");
    } 
 return 0;
}
