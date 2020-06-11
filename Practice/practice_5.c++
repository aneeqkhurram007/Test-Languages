#include <iostream>
using namespace std;
int main()
{

    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    i = num - 1;
    while (i >= 1)
    {
        num = num * i;
        i--;
    }
    cout << "Factorial is : " << num;
}