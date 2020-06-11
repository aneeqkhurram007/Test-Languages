#include <iostream>
using namespace std;
int main()
{

    int num, num1 = 0, num2 = 1, nnum = 0;
    cout << "Enter fibonacci number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {

        cout
            << nnum << " ";
        num1 = nnum;
        nnum = num1 + num2;
        num2 = num1;
    }
}