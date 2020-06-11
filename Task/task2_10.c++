#include <iostream>
using namespace std;
int main()
{
    int x_cordinate, y_cordinate;
    cout << "Enter X-Coordinate of a point = ";
    cin >> x_cordinate;
    cout << "Enter Y-Coordinate of a point = ";
    cin >> y_cordinate;
    if (x_cordinate > 0 && y_cordinate > 0)
    {
        cout << "It lies in 1st Quadrant";
    }
    if (x_cordinate < 0 && y_cordinate > 0)
    {
        cout << "It lies in 2nd Quadrant";
    }
    if (x_cordinate < 0 && y_cordinate < 0)
    {
        cout << "It lies in 3rd Quadrant";
    }
    if (x_cordinate > 0 && y_cordinate < 0)
    {
        cout << "It lies in 4th quadrant";
    }
    if (x_cordinate == 0 && y_cordinate == 0)
    {
        cout << "It lies at origin";
    }
    if (x_cordinate == 0 && y_cordinate != 0)
    {
        cout << "Point located at Y-axis";
    }
    if (x_cordinate != 0 && y_cordinate == 0)
    {
        cout << "Point located at X-axis";
    }
}