#include <stdio.h>
float calculate_charges(float hours);

int main()
{
    float a, b, c;

    printf("Input Hours of Car 1=");
    scanf("%f", &a);
    printf("Input Hours of Car 2=");
    scanf("%f", &b);
    printf("Input Hours of Car 3=");
    scanf("%f", &c);

    printf("Car\tHours\tCharge\n");
    // int calculate_charges(int a, int b, int c, int ch1, int ch2, int ch3);
    printf("1\t%0.1f\t%0.1f\n", a, calculate_charges(a));
    printf("2\t%0.1f\t%0.1f\n", b, calculate_charges(b));
    printf("3\t%0.1f\t%0.1f\n", c, calculate_charges(c));

    return 0;
}
float calculate_charges(float hours)
{
    float charge;
    for (int i = 1; i < 4; i++)
    {

        if (hours <= 3)
        {
            charge = 2.00;
        }
        else if (hours > 3 && hours < 24)
        {
            charge = 0.5 * hours + 0.5;
        }
        else if (hours == 24)
        {
            charge = 10;
        }
    }
    return charge;
}
