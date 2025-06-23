#include <iostream>
using namespace std;

class Rectangle {
private:
  double length;
 double width;

public:
    Rectangle(double l = 0.0, double w = 0.0) : length(l), width(w) {}
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
    double getArea() const {
        return length * width;
    }
    double getPerimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    rect.setDimensions(length, width);
    cout << "Area of the rectangle: " << rect.getArea() << endl;
    cout << "Perimeter of the rectangle: " << rect.getPerimeter() << endl;

    return 0;
}
