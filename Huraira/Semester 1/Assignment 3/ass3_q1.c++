#include <iostream>
using namespace std;
int main()
{
    int x, y, mul = 0, count;
    cout << "Enter a value for x: ";
    cin >> x;
    cout << "Enter a value for y: ";
    cin >> y;
    for (count = 1; count <= y; count++)
    {

        mul = mul + x;
    }
    cout << mul;
}