#include <iostream>
using namespace std;
int calcSum(int array[], int size)
{

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}
int findMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
void update(int a[], int size, int max)
{

    for (int i = 0; i < size; i++)
    {
        a[i] = max - a[i];
        cout << a[i] << " ";
    }
}
int main()
{

    int array1[] = {2, 3, 4, 5, 6, 1, 2, 1, 2};
    int array2[] = {2, 3, 1, 2, 1, 3, 1};
    int lenght1 = sizeof(array1) / sizeof(array1[0]);
    int lenght2 = sizeof(array2) / sizeof(array2[0]);
    cout << "The sum of array 1 is = " << calcSum(array1, lenght1) << endl;
    cout << "The sum of array 2 is = " << calcSum(array2, lenght2) << endl;
    cout << "Maximum value is = " << findMax(calcSum(array1, lenght1), calcSum(array2, lenght2));
    int max = findMax(calcSum(array1, lenght1), calcSum(array2, lenght2));
    cout << "\nUpdated values of array1 : " << endl;
    update(array1, lenght1, max);
    cout << "\nUpdated values of array2 : " << endl;
    update(array2, lenght2, max);
}