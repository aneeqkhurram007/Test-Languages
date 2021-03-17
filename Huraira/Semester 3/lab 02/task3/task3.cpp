#include <iostream>
using namespace std;
int &setValue(int *arr, const int posit)
{
    return arr[posit];
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Enter position: ";
    int posit;
    cin >> posit;
    setValue(arr, posit);
    cout << "Enter value: ";
    cin >> arr[posit];
    cout << "\n"
         << arr[posit];
}