#include <stdio.h>
int main()
{
    int rollNum;
    printf("\nEnter your roll number: ");
    scanf("%d", &rollNum);
    if (rollNum % 2 == 0)
    {
        printf("\nThe student will visit the school on Tuesday, Thursday and Saturday.");
    }
    else
    {
        printf("\nThe student will visit the school on Monday, Wednesday and Friday.");
    }
}