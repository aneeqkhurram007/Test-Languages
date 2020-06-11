#include <iostream>
using namespace std;
int main()
{
    int power = 1, base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    for (int i = 1; i <= exponent; i++)
    {
        power = power * base;
    }
    cout << power;
}