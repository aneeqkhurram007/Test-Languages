#include <stdio.h>
#include <string.h>
void find_Substring(char s1[], char s2[])
{
    int flag;
    int count = 0;
    while (s2[count] != '\0')
    {
        count++;
    }
    for (int i = 0; s1[i] != '\0'; i++)
    {
        flag = 0;

        if (s2[0] == s1[i])
        {
            for (int k = 0; k < count; k++)
            {
                if (s2[k] != s1[k + i])
                {
                    break;
                }

                if (k == (count - 1))
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
        {
            printf("\nThe substring is present.");
            break;
        }
    }
    if (flag == 0)
    {
        printf("\nThe string is not present.");
    }
}
int main()
{
    char string[100];
    char subString[25];
    printf("\nEnter a string: ");
    gets(string);
    printf("\nEnter a sub string: ");
    gets(subString);
    find_Substring(string, subString);
}