#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Enter a number: ";
    cin >> num;
    int total = 0;
    for (int i = 1; i <= num; i++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= i;
        }
        int factor = 1;
        for (int k = 1; k <= i; k++)
        {
            factor = factor * (i / factorial);
        }

        if (i == 1 || i % 2 == 0)
        {
            total += factor;
        }
        else
        {
            total -= factor;
        }
        }

    cout << "Total is = " << total << endl;
}