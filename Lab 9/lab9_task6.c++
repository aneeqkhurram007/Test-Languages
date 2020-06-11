#include <iostream>
using namespace std;
int main()
{
    int x, y, i;
    for (i = 1; i <= 4; i++)
    {

        for (y = 1; y <= 4; y++)
        {
            if (y == i)
            {
                cout << y;
            }
            else
            {
                cout << "0";
            }
        }
        cout << "\n";
    }
}