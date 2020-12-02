#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    int arr[14];
    int temp;
    int keySize = 0;

    file.open("data.txt");
    for (int i = 0; !file.eof(); i++)
    {
        if (i == 14)
        {
            file >> temp;
        }
        else
        {
            file >> arr[i];
        }
    }
    int *ptr = arr;

    for (int i = 0; i < 14; i++)
    {
        if (*(ptr + i) == temp)
        {
            keySize++;
        }
    }
    int arr2[14 - keySize];
    int *ptr2 = arr2;
    for (int i = 0, j = 0; i < 14; i++)
    {
        if (*(ptr + i) != temp)
        {
            *(ptr2 + j) = *(ptr + i);
            cout << *(ptr2 + j) << " ";

            j++;
        }
    }
}