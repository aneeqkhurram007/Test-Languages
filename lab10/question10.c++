#include <iostream>
using namespace std;
int main()
{
    int num, i, square;
    for (i = 1; i <= 10; i++)
    {
        cout << "\nEnter a number: ";
        cin >> num;
        if (num % 2 != 0)
        {
            num = num * num;
        }
        cout << "\n"
             << num;
    }
}
