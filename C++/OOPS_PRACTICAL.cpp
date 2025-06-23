#include <iostream>
#include <cmath>
class Number {
public:
virtual void display() const = 0;  
    virtual void convert() = 0;      
 };
class PolarNumber : public Number {
private:
    double radius;
    double angle; 
public:
    PolarNumber(double r, double theta) : radius(r), angle(theta) {}
void display() const override {
std::cout << "Polar Coordinates: ("<<radius<<","<<angle<<"radians)"<<std::endl;
}
 void convert() override {
    double x = radius * cos(angle);
double y = radius * sin(angle);
    std::cout << "Converted to Cartesian: ("<<x<<","<<y<<")"<<std::endl;
 }
};
class CartesianNumber : public Number {
private:
    double x;
    double y;
public:
    CartesianNumber(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}
void display() const override {
        std::cout << "Cartesian Coordinates: (" << x << ", " << y << ")" << std::endl;
    }
     void convert() override {
        double radius = sqrt(x * x + y * y);
        double angle = atan2(y,x); 
        std::cout << "Converted to Polar: (" << radius << ", " << angle << " radians)" << std::endl;
     }
};
int main() {
    PolarNumber p(5.0, 1.57); 
    p.display();
    p.convert();
    CartesianNumber c(3.0, 4.0); 
    c.display();
    c.convert();

    return 0;
}
