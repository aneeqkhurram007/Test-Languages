#include <iostream>
using namespace std;
int main()
{

    int array[10], i = 0;
    while (i < 10)
    {
        cout << "Enter a number: ";
        cin >> array[i];
        i++;
    }
    i = 0;
    while (i < 10)
    {
        if (i % 2 == 0)
        {
            array[i] = array[i] + 1;
            cout << array[i] << " ";
        }
        else
        {
            array[i] = array[i] - 1;
            cout << array[i] << " ";
        }
        i++;
    }
}