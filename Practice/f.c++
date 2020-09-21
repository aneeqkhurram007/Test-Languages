#include <iostream>
using namespace std;
int main()
{
    int array1[10], array2[10];
    cout << "\nEnter values for array1:\n ";
    for (int i = 0; i < 10; i++)
    {
        cin >> array1[i];
    }
    cout << "\nEnter values for array2:\n ";
    for (int i = 0; i < 10; i++)
    {
        cin >> array2[i];
    }
    cout << "\nIndexes having same values: ";
    for (int i = 0; i < 9; i++)
    {
        if (array1[i] == array2[i])
        {
            cout << i << " ";
        }
    }
}