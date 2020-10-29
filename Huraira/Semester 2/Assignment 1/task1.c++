#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter size for array 1: ";
    cin >> n1;
    cout << "Enter size for array 2: ";
    cin >> n2;
    int arr1[n1], arr2[n2];

    cout << "Enter elements in array 1: \n";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter elements in array 2: \n";
    for (int i = 0; i < n1; i++)
    {
        cin >> arr2[i];
    }
    cout << "Non Common Elemnts of First Array: \n";
    int flag;
    for (int i = 0; i < n1; i++)
    {

        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] != arr2[j])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << " " << arr1[i];
        }
    }
}