#include <stdio.h>
int main()
{
    char arr[24];
    printf("\nEnter a string: ");
    gets(arr);
    for (int i = 23; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
}