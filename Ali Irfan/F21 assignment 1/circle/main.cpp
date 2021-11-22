#include <iostream>
#include <math.h>
using namespace std;
class Circle
{
private:
    int radius;

public:
    Circle(int radius)
    {
        setRadius(radius);
    }
    void setRadius(int rad)
    {
        radius = rad;
    }
    int getRadius() { return radius; }
    void circumference()
    {
        cout << "Circumference of the circle : " << 2 * getRadius() * M_PI;
    }
    void area()
    {
        cout << "Area of the circle : " << 2 * getRadius() * getRadius() * M_PI;
    }
};

int main(int argc, char const *argv[])
{
    int radius = 3;
    Circle c1(radius);
    c1.circumference();
    return 0;
}
