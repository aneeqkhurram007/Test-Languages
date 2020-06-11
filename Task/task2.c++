#include <iostream>
using namespace std;
int main()
{
    float x;
    int y;
    cout << "\nEnter a number: ";
    cin >> x;
    y = x;
    if (x == y)
    {
        cout << "\nIt is integer";
    }
    else
    {
        cout << "\nIt is float";
    }
}
