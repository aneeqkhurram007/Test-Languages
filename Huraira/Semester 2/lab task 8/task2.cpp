#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {0};
    cout << "Enter elements in array" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + i + 5);
        *(ptr + i + 5) = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << *(ptr + i) << " ";
    }
}