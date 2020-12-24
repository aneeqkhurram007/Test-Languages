#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("output.txt");
    int arr[10] = {0};
    cout << "Enter elements in array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int Max = arr[0];
    int Min = arr[0];

    int secondMax = arr[0];
    int secondMin = arr[0];

    int *ptr = arr;

    for (int i = 0; i < 10; i++)
    {
        if (Max < *(ptr + i))
        {
            Max = *(ptr + i);
        }
        if (Min > *(ptr + i))
        {
            Min = *(ptr + i);
        }
    }

    for (int i = 0; i < 10; i++)
    {

        if (secondMax < *(ptr + i) && *(ptr + i) < Max)
        {
            secondMax = *(ptr + i);
        }

        if (secondMin > *(ptr + i) && *(ptr + i) > Min)
        {
            secondMin = *(ptr + i);
        }
    }

    file << "Second min is : " << secondMin << endl;
    file << "Second max is : " << secondMax << endl;
    cout << "Second min is : " << secondMin << endl;
    cout << "Second max is : " << secondMax << endl;
}