#include <iostream>
using namespace std;
int main()
{
    int num, rev = 0, temp;
    cout << "Enter a number up to 6 digits: ";
    cin >> num;

    while (num != 0)
    {
        temp = num % 10;
        rev = rev * 10 + temp;
        num /= 10;
    }
    cout << "Reverse of a number is: " << rev;
}