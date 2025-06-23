#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex() : real(0.0), imag(0.0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex subtract(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    void display() const {
        if (imag >= 0)
         cout << real << " + " << imag << "i" << endl;
        else
          cout << real << " - " << -imag << "i" << endl;
     }
};

int main() {
    
    Complex c1(3.5, 2.5);
    Complex c2(1.5, 4.5);
    Complex resultAdd = c1.add(c2);
    Complex resultSubtract = c1.subtract(c2);

    cout << "c1: ";
       c1.display();
    cout << "c2: ";
    c2.display();
     cout << "Sum: ";
    resultAdd.display();
    cout << "Difference: ";
    resultSubtract.display();

    return 0;
}
