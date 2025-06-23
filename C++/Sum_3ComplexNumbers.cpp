#include <iostream> 
using namespace std;

class Complex {
private:
    int real, img;

public:
    
    Complex() : real(0), img(0) {}

    
    Complex(int x, int y) : real(x), img(y) {}

    
    Complex(const Complex &c) : real(c.real), img(c.img) {}

    
    void read() {
        cout << "Input the complex number (real and imaginary parts): ";
        cin >> real >> img;
    }

    
    void print() const {
        cout << "Complex number = " << real << " + " << img << "i" << endl;
    }

    
    void add(const Complex &c1, const Complex &c2) {
        real = c1.real + c2.real;
        img = c1.img + c2.img;
        cout << "Added complex number = " << real << " + " << img << "i" << endl;
    }

    void mult(const Complex &c1, const Complex &c2) {
        real = c1.real * c2.real - c1.img * c2.img;
        img = c1.real * c2.img + c1.img * c2.real;
        cout << "Multiplied complex number = " << real << " + " << img << "i" << endl;
    }

    
    Complex operator+(const Complex &com1) {
        return Complex(real + com1.real, img + com1.img);
    }

    
    friend Complex operator-(const Complex &com1, const Complex &com2) {
        return Complex(com1.real - com2.real, com1.img - com2.img);
    }

    
    Complex operator++() {
        ++real;
        ++img;
        return *this;
    }
};

int main() {
    Complex c1, c2(10, 12), c3(c2), c4, c5;

    
    c1.read();
    c1.print();
    c2.print();
    c3.print();

    
    c3.add(c1, c2);
    c3.mult(c1, c2);

    
    c4 = c2 + c3;
    c4.print();

    c5 = c4 - c1;
    c5.print();

    return 0;
}