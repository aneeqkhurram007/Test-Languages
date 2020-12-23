#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("output.txt");
    int arr[10] = {10, 2, 5, 7, 6, 8, 4, 9, 11, 13};
    cout << "Enter elements in array" << endl;
    /*for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }*/
    int Max = arr[0];
    int Min = arr[0];

    int secondMax = arr[0];
    int secondMin = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (Max < arr[i])
        {
            Max = arr[i];
        }
        if (Min > arr[i])
        {
            Min = arr[i];
        }
    }

    for (int i = 0; i < 10; i++)
    {

        if (secondMax < arr[i] && arr[i] < Max)
        {
            secondMax = arr[i];
        }

        if (secondMin > arr[i] && arr[i] > Min)
        {
            secondMin = arr[i];
        }
    }

    cout << "Second min is : " << secondMin << endl;
    cout << "Second max is : " << secondMax << endl;
}