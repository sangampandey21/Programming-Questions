#include <iostream>
#include <iomanip>

using namespace std;

class shape {
protected:
    int width, height; 

public:
    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }
};

class rectangle : public shape {
public:
    int getArea() {
        return (width * height);
    }
};

int main() {
    rectangle rect;
    rect.setWidth(7);
    rect.setHeight(6);
    cout << "Total area: " << rect.getArea() << "\n"; 
    return 0;  
}
