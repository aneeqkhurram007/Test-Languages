#include <iostream>
#include <string>
using namespace std;
int main()
{

    int num1[5], num2[5], mul[5], i, c;
    cout << "Please enter first number: ";
    for (i = 0; i < 5; i++)
    {
        cin >> num1[i];
    }
    cout << "Please enter second number: ";
    for (i = 0; i < 5; i++)
    {
        cin >> num2[i];
    }
    for (i = 0; i < 5; i++)
    {
        mul[i] = num1[i] * num2[i];
    }
    cout << "Multiplication of Arrays: ";
    for (i = 0; i < 5; i++)
    {
        cout << mul[i] << " ";
    }
}