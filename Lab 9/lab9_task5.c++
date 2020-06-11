#include <iostream>
using namespace std;
int main()
{
    int x, y, i;
    for (i = 5; i >= 1; i--)
    {
        for (int a = 1; a < i; a++)
        {
            cout << "0";
        }

        for (y = 1; y <= 5; y++)
        {
            if (y == i)
            {
                for (x = y; x <= 5; x++)
                {
                    cout << x;
                };
            }
        }
        cout << "\n";
    }
}