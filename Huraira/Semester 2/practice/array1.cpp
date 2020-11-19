#include <iostream>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 9, 6, 9, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 9)
        {
            ++count;
        }
    }

    int temp[count] = {0};
    for (int i = 0, j = 0; i < size; i++)
    {
        if (arr[i] != 9)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    for (int i : temp)
    {
        cout << i;
    }
}