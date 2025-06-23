#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Constructor to initialize complex number
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
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

    Complex result = c1 + c2;
    cout << "c1: ";
    c1.display();
    cout << "c2: ";
    c2.display();
    cout << "Sum: ";
    result.display();

    return 0;
}
