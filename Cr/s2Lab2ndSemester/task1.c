#include <stdio.h>
void swap(int *p, int chuck)
{
    int temp;
    for (int i = 0; i < 3; i += 2)
    {
        temp = *(p + i);
        *(p + i) = *(p + 2);
        *(p + 2) = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int chunk = 3;
    int *p = arr;
    for (int i = 0; i < 3; i++)
    {
        swap(p, chunk);
        swap(p + 3, chunk);
        swap(p + 6, chunk);
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
}