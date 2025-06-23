#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    void read() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void print() const {
        cout << real << " + " << imag << "i" << endl;
    }

    Complex operator+(Complex& q) {
        Complex w;
        w.real = real + q.real;
        w.imag = imag + q.imag;
        return w;
    }
};

int main() {
    Complex num1, num2;

    cout << "Enter first complex number:\n";
    num1.read();

    cout << "Enter second complex number:\n";
    num2.read();

    Complex sum = num1 + num2;

    cout << "\nSum: ";
    sum.print();

    return 0;
}