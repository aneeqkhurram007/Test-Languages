#include <iostream>
using namespace std;
int main()
{

    int i, b;
    for (b = 5; b >= 1; b--)
    {
        for (i = 5; i >= b; i--)
        {
            cout << " ";
        }
        for (i = 1; i <= b; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}