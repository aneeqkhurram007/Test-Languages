#include <iostream>
using namespace std;
int main()

{
    int Num, max = 0, min = 0, Num1;
    cout << "Enter a Number: ";
    cin >> Num;
    while (Num1 != 0)
    {
        if (Num1 > Num)
        {
            max = Num1;
        }
        if (Num1 < Num)
        {
            min = Num1;
        }
        cout << "Enter a Number: ";
        cin >> Num1;
    }
    cout << "Max number is : " << max;
    cout << " and Min number is : " << min;
}