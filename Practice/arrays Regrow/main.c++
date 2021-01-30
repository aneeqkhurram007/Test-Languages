#include <iostream>
using namespace std;
void regrow(int *p, int size)
{
    int temp[size + size];

    for (int i = 0; i < size; i++)
    {
        temp[i] = *(i + p);
    }
    delete[] p;
}
int main()
{
    int arr[10];
    int size = 10;
    char choice;
    do
    {

        for (int i = 0; i < 10; i++)
        {
            arr[i] = i + 1;
        }
        cin >> choice;
        if (arr[size - 1] == 0)
        {
            regrow(arr, size);
            arr[size] = 12345;
            cout << "Ok";
        }
        else
        {
            regrow(arr, size);
            cout << "Not Ok";
        }

    } while (choice == 'y');
}