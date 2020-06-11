#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 6, 5, 4};
    int temp[6];
    int x;
    char type;
    cout << "Enter number of times you want to rotate" << endl;
    cin >> x;
    cout << "Enter type of rotation:";
    cin >> type;
    if (type == 'R')
    {

        for (int i = 5; i >= 0; i--)
        {
            if (i + x >= 6)
            {
                temp[i + x - 6] = arr[i];
            }
            else
            {
                temp[i + x] = arr[i];
            }
        }
        for (int i = 0; i < 6; i++)
        {
            cout << temp[i] << " ";
        }
    }
    if (type == 'L')
    {
        for (int i = 0; i <= 5; i++)
        {
            if (i + x >= 6)
            {
                temp[i + x - 6] = arr[i];
            }
            else
            {
                temp[i + x] = arr[i];
            }
        }
        for (int i = 0; i < 6; i++)
        {
            cout << temp[i] << " ";
        }
    }

    return 0;
}