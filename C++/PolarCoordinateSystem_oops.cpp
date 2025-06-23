#include<iostream>
#define Constant 3.14
class Polar
{
private:
    double theta; 
    double r;      
public:
    void getdata() {
    std::cout << "Enter radius :";
    std::cin >> r;
    std::cout << "Enter angle : ";
    std::cin >> theta;
 }
    void display() {
std::cout << "Polar Coordinates: (r="<<r<<",theta="<<theta<<"degrees)"<< std::endl;
      }
/*double convert(double thetaDegrees) {  
    return thetaDegrees * (Constant / 180.0);
       }
    double revert(double thetaRadians) {
    return thetaRadians * (180.0 / Constant); 
      }*/
};
int main() {
    Polar p;
    p.getdata();
    p.display();

    //double thetaRadians = p.convert(p.theta);
    // std::cout << "Theta in radians: " << thetaRadians << std::endl;
//double thetaDegrees = p.revert(thetaRadians);
  //  std::cout << "Theta in degrees after revert: " << thetaDegrees << std::endl;
    return 0;
}
