#include <stdio.h>
void linearSearchUsingPointer(int *arr, int size, int key)
{
    int *ptr = arr;
    int flag = 0;
    for (int i = 0; i < size; i++)
    {
        if (*(i + ptr) == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("\nIt is available in array.");
    }
    else
    {
        printf("\nIt is not available in array.");
    }
}
int main()
{
    int size;
    printf("\nEnter size for array: ");
    scanf("%d", &size);
    printf("\nEnter data in array: \n");
    int arr[size];
    int *ptr = arr;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (i + ptr));
    }
    int key;
    printf("\nEnter value to find: ");
    scanf("%d", &key);
    linearSearchUsingPointer(arr, size, key);
    return 0;
}