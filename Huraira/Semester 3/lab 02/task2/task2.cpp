#include <iostream>
using namespace std;
void numbersCopy(int *dest, const int *src)
{
    if (src == NULL)
    {
        cout << "Cannot copy";
        return;
    }
    else
    {

        int i = 0;
        while (i < 6)
        {
            dest[i] = src[i];
            i++;
        }
        cout << "Destination is: ";
        for (int i = 0; i < 6; i++)
        {
            cout << dest[i] << " ";
        }
    }
}
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {6, 5, 4, 3, 2, 1};
    numbersCopy(arr1, arr2);
}