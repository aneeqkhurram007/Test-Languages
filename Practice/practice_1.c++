#include <iostream>
using namespace std;
int main()
{
    int num1, num2, i = 1;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    while (num1 > num2 && i >= 1)
    {
        cout << "num1 is greater";
        i--;
    }
    while (num2 > num1 && i >= 1)
    {
        cout << "num2 is greater";
        i--;
    }
}