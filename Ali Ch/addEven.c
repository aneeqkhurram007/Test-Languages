#include <stdio.h>
int addEvenNumber(int arr[]);
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sumOfEven = addEvenNumber(arr);
    printf("Sum of Even numbers is %d", sumOfEven);
}
int addEvenNumber(int arr[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}