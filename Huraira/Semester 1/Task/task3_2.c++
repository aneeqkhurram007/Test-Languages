#include <iostream>
using namespace std;
int main()
{
    int a, i = 1;
    cout << "Enter a number: ";
    cin >> a;
    if (a % 2 != 0)
    {
        a++;
    }

    while (i <= 10)
    {
        cout << a << " ";
        a = a + 2;

        i++;
    }
}