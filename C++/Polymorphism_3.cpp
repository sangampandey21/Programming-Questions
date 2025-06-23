#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() const {
        cout << "Animal makes a sound" << endl;
    }

    // Virtual destructor
    virtual ~Animal() {}
};
class Dog : public Animal {
public:
    // Override the sound function
    void sound() const override {
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal {
public:
    // Overridding sound function
    void sound() const override {
        cout << "Cat meows" << endl;
    }
};
void makeSound(const Animal& animal) {
    animal.sound();
}
int main() {
    Dog dog;
    Cat cat;

    Animal* animals[2];
    animals[0] = &dog;
    animals[1] = &cat;
// Demonstrate runtime polymorphism
    for (int i = 0; i < 2; ++i) {
        animals[i]->sound();
    }

    return 0;
}
