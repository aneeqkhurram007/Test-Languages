#include <stdio.h>
void doubleIt(int *arr, int size)
{
    int *ptr = arr;
    for (int i = 0; i < 6; i++)
    {
        printf("\nBefore Value: %d", *(i + ptr));
        printf("\nAfter Value: %d", *(i + ptr) * 2);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    doubleIt(arr, 6);

    return 0;
}