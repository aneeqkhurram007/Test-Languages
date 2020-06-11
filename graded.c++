#include <iostream>
using namespace std;
int main()
{
    int x, i = 1;
    while (i <= 4)
    {
        x = i;
        while (x <= i + 4)
        {
            cout << x;
            x++;
        }
        cout << "\n";
        i++;
    }
}