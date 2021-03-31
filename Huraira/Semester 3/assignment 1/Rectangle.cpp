
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int width;

public:
    void setLength(int length)
    {
        this->length = length;
    }
    int getLength()
    {
        return this->length;
    }
    void setWidth(int width)
    {
        this->width = width;
    }
    int getWidth()
    {
        return this->width;
    }
    int area()
    {
        return this->getWidth() * this->getWidth();
    }
    int perimeter()
    {
        return 2 * this->getWidth() + 2 * this->getLength();
    }
};
int main()
{
    Rectangle rectangle = Rectangle();
    int length, width;
    cout << "Enter length of rectangle: ";
    cin >> length;
    rectangle.setLength(length);
    cout << "Enter width of rectangle: ";
    cin >> width;
    rectangle.setWidth(width);
    cout << "Area of rectangle is " << rectangle.area() << endl;
    cout << "Area of rectangle is " << rectangle.perimeter() << endl;

    return 0;
}