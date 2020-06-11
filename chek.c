#include <stdio.h>
int main()
{

    char ch;
    printf("\nEnter any character: ");
    scanf("%c", &ch);

    int x = ch;
    if (x == ch)
    {
        printf("\n It is neither consonant nor vowel");
    }
    else
    {
        printf("\n Either consonat or vowel");
    }
}