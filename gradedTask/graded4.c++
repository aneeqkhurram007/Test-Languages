#include <iostream>
using namespace std;
int main()
{
    int array[10], i;
    for (i = 0; i < 10; i++)
    {
        cout << "\nEnter a numbe " << i + 1 << " : ";
        cin >> array[i];
    }
    cout << "\nNumber with atleast two digits are: ";
    for (i = 0; i < 10; i++)
    {
        if (array[i] >= 10)
        {
            cout << array[i] << " ";
        }
    }
}