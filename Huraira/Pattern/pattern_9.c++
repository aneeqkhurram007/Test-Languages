#include <iostream>
using namespace std;
int main()
{

    int a, i, b;
    for (b = 1; b <= 5; b++)
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