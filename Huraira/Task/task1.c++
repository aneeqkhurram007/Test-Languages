#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "\nEnter a real number: ";
    cin >> x;
    if (x > 0)
    {
        cout << "\nAbsolute value is: " << x;
    }
    else
    {
        x = -(x);
        cout << "\nAbsolute value is: " << x;
    }

    return 0;
}
