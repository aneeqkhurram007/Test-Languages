#include <stdio.h>
int *getPolarity(int *arr, int size)
{
    int *temp = arr;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            temp[i] = -1;
        }
        else if (arr[i] > 0)
        {
            temp[i] = 1;
        }
        else
        {
            temp[i] = 0;
        }
    }
    return temp;
}
int main()
{

    int size;
    printf("\nEnter size for array: ");
    scanf("%d", &size);

    int arr[size];
    int *ptr = arr;
    printf("\nEnter data in array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = getPolarity(arr, size);

    printf("\nModified array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}