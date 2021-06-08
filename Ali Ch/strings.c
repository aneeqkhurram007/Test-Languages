#include <stdio.h>
#include <string.h>
int main()
{
    char str1[25], str2[25];
    int n;
    int size1 = 0, size2 = 0;
    printf("\nEnter your string 1: ");
    gets(str1);
    printf("\nEnter your string 2: ");
    gets(str2);
    printf("\nEnter value for n: ");
    scanf("%d", &n);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        size1++;
    }
    for (int i = 0; str2[i] != '\0'; i++)
    {
        size2++;
    }
    if (size2 < n)
    {
        printf("%s%s", str1, str2);
    }
    else
    {
        for (int i = 0; str1[i] != '\0'; i++)
        {
            printf("%c", str1[i]);
        }
        printf(" ");
        for (int i = 0; i < n; i++)
        {
            printf("%c", str2[i]);
        }
    }

    return 0;
}