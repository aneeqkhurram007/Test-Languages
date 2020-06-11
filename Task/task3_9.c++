#include <iostream>
using namespace std;
int main()
{

    int number, x, i = 1;
    cout << "Enter a number: ";
    cin >> number;
    x = number;
    while (i <= 10)
    {

        number = x * x;
        x++;
        cout
            << number << " ";
        i++;
    }
}