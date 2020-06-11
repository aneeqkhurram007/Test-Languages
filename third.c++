#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a number :" << endl;
    cin >> x;
    if (x >= 0 && x <= 10)
    {
        cout << "poor" << endl;
    }
    if (x >= 11 && x <= 20)
    {
        cout << "weak" << endl;
    }
    if (x >= 21 && x <= 30)
    {
        cout << "good" << endl;
    }
    if (x >= 31 && x <= 40)
    {
        cout << "better" << endl;
    }
    if (x >= 41 && x <= 50)
    {
        cout << "best" << endl;
    }
}
