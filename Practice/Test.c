#include <stdio.h>
int main()
{
    int num1, num2, option;
    char ch;
    do
    {

        printf("\nEnter a number: ");
        scanf("%d", &num1);
        printf("\nEnter a number: ");
        scanf("%d", &num2);

        printf("\n1 for addition\n2 for subtraction \n3 for multiplication\n4 for division");
        printf("\nEnter choice from 1 to 4: ");
        scanf("%d", &option);
        if (option == 1)
        {
            int sum = num1 + num2;
            printf("Sum of the numbers is %d", sum);
        }
        if (option == 2)
        {
            int difference = num1 - num2;
            printf("Difference of the numbers is %d", difference);
        }
        if (option == 3)
        {
            int mul = num1 * num2;
            printf("Multiplication of the numbers is %d", mul);
        }
        if (option == 4)
        {
            int div = num1 / num2;
            printf("Division of the numbers is %d", div);
        }
        printf("\nIf you want to restart press Y/y otherwise N/n: ");
        scanf(" %c", &ch);

    } while (ch == 'Y' || ch == 'y');
    printf("\nHave a nice day");
}