#include <stdio.h>
int main()
{
    int class;
    float fee;
    printf("\nEnter the Class: ");
    scanf("%d", &class);
    printf("\nEnter the Fee: ");
    scanf("%f", &fee);
    switch (class)
    {
    case 1 ... 5:
        fee = fee - (fee * 0.20);
        break;
    case 6 ... 10:
        fee = fee - (fee * 0.25);

        break;
    default:
        break;
    }
    printf("\nThe fee after discount is %.2f", fee);
}