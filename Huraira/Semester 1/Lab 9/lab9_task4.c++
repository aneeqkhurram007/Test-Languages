#include <iostream>
using namespace std;
int main()
{

    int base = 2, i, power = 1, exponent;
    for (exponent = 0; exponent <= 6; exponent++)
    {
        for (int i = 1; i <= exponent; i++)
        {

            power = power * base;
        }
        cout << power << " ";
        power = 1;
    }
}