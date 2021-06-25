#include <stdio.h>
int main()
{
    int size;
    printf("\nEnter size of array: ");
    scanf("%d", &size);
    int arr[size];
    int *ptr = arr;
    printf("\nEnter data in array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (i + ptr));
    }
    printf("\nArray in normal order: \n");
    for (int i = 0; i < size; i++)
    {
        printf("\n%d ", *(i + ptr));
    }

    printf("\nEnter size of array2: ");
    scanf("%d", &size);
    int arr2[size];
    ptr = arr2;
    printf("\nEnter data in array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (i + ptr));
    }
    printf("\nArray in reverse order: \n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("\n%d ", *(i + ptr));
    }

    return 0;
}