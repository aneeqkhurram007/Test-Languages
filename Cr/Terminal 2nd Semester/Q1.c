#include <stdio.h>
#include <string.h>
typedef struct products
{
    char prodNum[10];
    int retail;
} Products;
void display(Products p[])
{

    printf("\nProduct Number\tRetail Price");

    for (int i = 0; i < 5; i++)
    {

        printf("\n%s\t\t$%d", p[i].prodNum, p[i].retail);
    }
}
int main()
{

    Products prod[5] = {{"P-101", 3},
                        {"P-102", 4},
                        {"P-103", 5},
                        {"P-104", 7},
                        {"P-105", 9}};
Restart:

    display(prod);
    int quantity = 0;
    char prodnum[50];
    float totalBill = 0;
    int flag = 0;

    printf("\nEnter product number : ");
    fflush(stdin);
    scanf("%s", prodnum);
    for (int j = 0; j < 5; j++)
    {
        if (strcmp(prodnum, prod[j].prodNum) == 0)
        {
            printf("\nEnter quantity : ");
            fflush(stdin);
            scanf("%d", &quantity);
            totalBill = quantity * prod[j].retail;
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag != 0)
    {
        printf("\nYou entered wrong product number.");
    }

    if (totalBill != 0)
    {

        printf("\nTotal Bill = %.2f", totalBill);
    }
    else
    {
        printf("\nNo items were purchased. The bill was zero.");
    }

    char choice;
    printf("\nPress 'y' to continue shopping: ");
    scanf("\n%c", &choice);
    if (choice == 'y')
    {
        goto Restart;
    }
    else
    {
        printf("\nHave a nice day :)");
    }
}