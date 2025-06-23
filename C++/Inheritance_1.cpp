#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual ~Shape() {}
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getArea() const {
        return M_PI * radius * radius;
     }
    void displayArea() const {
        cout << "Area of the circle with radius " << radius << "is:" <<getArea()<<endl;
    }
};
int main() {
    Circle circle(3.0);
    circle.displayArea();

    return 0;
}
