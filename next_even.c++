#include <iostream>
using namespace std;
int main()
{

    int num, i = 1;
    cout << "Enter a number: ";
    cin >> num;
    while (num % 2 == 0 && i <= 5)
    {
        num = num + 2;
        cout << num << ",";
        i++;
    }

    while (num % 2 != 0 && i <= 5)
    {
        num = num + 1;
        cout << num << ",";
        num++;
        i++;
    }
}