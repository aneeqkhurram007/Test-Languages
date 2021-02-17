#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {0};
    float arr1[10] = {0};
    int sum = 0;
    float average = 0;
    cout << "Enter numbers in array: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        average = sum / (i + 1);
        arr1[i] = average;
    }
    cout << "Average array is : ";
    for (int i = 0; i < 10; i++)
    {
        cout << arr1[i] << " ";
    }
}