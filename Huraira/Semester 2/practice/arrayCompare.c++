#include <iostream>
using namespace std;

int main()
{

    int flag, n1, n2;
    cout << "Enter value for n1: ";
    cin >> n1;
    cout << "Enter value for n2: ";
    cin >> n2;
    int arr1[n2];
    int arr[n1];
    cout << "Enter value for array 1 :\n";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter value for array 2 :\n";

    for (int i = 0; i < n2; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n1; i++)
    {
        flag = 1;
        for (int j = 0; j < n2; j++)

        {

            if (arr[i] == arr1[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}