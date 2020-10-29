#include <iostream>
using namespace std;
int main()
{
    int a, i = 1, n;
    cout << "Enter a number: ";
    cin >> a;
    while (i <= 10)
    {
        a++;
        if (n == a * 2 && n == a * 3)
        {
            cout << " " << n;

            i++;
        }
    }
}