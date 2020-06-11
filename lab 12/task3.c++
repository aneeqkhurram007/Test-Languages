#include <iostream>
using namespace std;
int main()
{
    int i, array[10];
    for (i = 0; i <= 9; i++)
    {
        cout << "Enter a number: ";
        cin >> array[i];
    }

    for (i = 0; i <= 9; i++)
    {
        if (array[i] >= 10)
        {
            cout << array[i] << " ";
        }
    }
}