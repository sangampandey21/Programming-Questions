#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
     return a + b;
    }
 float add(float a, float b) {
     return a + b;
    }
    float add(int a, float b) {
      return a + b;
    }
float add(float a, int b) {
    return a + b;
    }
      };

int main() {
    Math math;
    int intResult = math.add(5, 10);
    cout << "Sum of integers: "<<intResult << endl;

    float floatResult = math.add(5.5f, 3.3f);
    cout << "Sum of floats: " << floatResult << endl;

    float intFloatResult1 = math.add(5, 3.3f);
    cout << "Sum of integer and float (int first): "<<intFloatResult1 << endl;

    float floatIntResult2 = math.add(5.5f, 10);
    cout << "Sum of float and integer (float first): "<<floatIntResult2 << endl;
return 0;
}
