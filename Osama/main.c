#include <stdio.h>
int fare(char zone, int weight)
{
    int fare = 0;
    switch (zone)
    {
    case 'A':
        if (weight <= 1)
        {
            fare = 150;
        }
        else if (weight >= 1 && weight <= 5)
        {
            fare = 150 + weight * 50;
        }
        else
        {
            fare = 400 + weight * 25;
        }

        break;
    case 'B':
        if (weight <= 1)
        {
            fare = 200;
        }
        else if (weight >= 1 && weight <= 5)
        {
            fare = 200 + weight * 75;
        }
        else
        {
            fare = 575 + weight * 50;
        }

        break;
    case 'C':
        if (weight <= 1)
        {
            fare = 250;
        }
        else if (weight >= 1 && weight <= 5)
        {
            fare = 250 + weight * 100;
        }
        else
        {
            fare = 750 + weight * 75;
        }

        break;

    default:
        printf("\nZone not found");
        break;
    }
    return fare;
}
int main()
{
    char zone;
    int weight;
    int price;
    printf("\nEnter your zone: ");
    scanf("%c", &zone);
    printf("\nEnter weight: ");
    scanf("%d", &weight);
    price = fare(zone, weight);
    printf("\nYour fare is : %d", price);
    return 0;
}