#include <iostream>
using namespace std;
int main()
{

    int number, i = 1;
    cout << "Enter a number: ";
    cin >> number;
    while (i <= 6)
    {
        cout << number;
        i++;
    }
    i = 1;
    while (i <= 5)
    {

        cout << "\n"
             << number;
        i++;
    }
    i = 1;
    while (i <= 5)
    {

        cout << number;
        i++;
    }
}
