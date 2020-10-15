#include <stdio.h>
int main()
{
    char group;
    int count = 1, students1 = 1, students2 = 2;
    printf("\nEnter the Group Letter: ");
    scanf("%c", &group);
    printf("\nFollowing students are enrolled in Group %c\n", group);

    while (count <= 15)
    {
        if (group == 'B')
        {

            printf("%d ", students2);
            students2 += 2;
        }
        else
        {

            printf("%d ", students1);
            students1 += 2;
        }
        count++;
    }
}