#include <iostream>
using namespace std;
int main()
{
    int array[7], i = 1, j = 1;
    while (i <= 7)
    {

        cout << "Please enter the " << i << " number(s) : " << endl;
        cin >> array[i];
        i++;
    }
    i = 1;
    while (i < 7)
    {
        for (int j = 1; j <= (7 - i); ++j)
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        ++i;
    }

    cout << "4th maximum number of array is: " << array[4];
}