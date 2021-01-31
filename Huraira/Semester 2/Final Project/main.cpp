#include <iostream>
#include <fstream>
#include <string>
using namespace std;
fstream file;
int SIZE = 4;
void display(int **table, char **prodName)
{
    cout << endl
         << "Product Name\tCode\tRetail\tQuantity"
         << endl;
    for (int i = 0; i < SIZE; i++)
    {
        if (i == 0)
        {
            cout << prodName[i] << "\t\t";
            file << prodName[i] << "\t\t";
        }
        else
        {
            cout << prodName[i] << "\t";
            file << prodName[i] << "\t";
        }

        for (int j = 0; j < (SIZE - 1); j++)
        {

            cout << table[j][i] << "\t";
            file << table[j][i] << "\t";
        }
        cout << endl;
        file << endl;
    }
}
int prodValid(int numOfProd)
{
    while (numOfProd > SIZE)
    {
        if (numOfProd > SIZE)
        {
            cout << "\nTry Again.";
            cout << "\nNOTE: You can only purchase at most " << SIZE << " products: ";
            cin >> numOfProd;
        }
    }
    return numOfProd;
}
void prodNumValid(int numOfProd, int *prodnum, int *quantity, int **table)
{
    int flag = 0;
    cout << "Num of Prod " << numOfProd << endl;
    for (int i = 0; i < numOfProd; i++)
    {
        cout << "\nEnter product number : ";
        cin >> prodnum[i];
        for (int j = 0; j < SIZE; j++)
        {
            if (prodnum[i] == table[0][j])
            {
                printf("\nEnter quantity : ");
                cin >> quantity[i];
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
            printf("\nYou entered wrong product number.\nTry Again.");
            i--;
        }
    }
}
float billing(int *prodnum, int **table, int *quantity, int *temp)
{
    float totalBill = 0;
    for (int i = 0; i < SIZE; i++)
    {

        for (int j = 0; j < SIZE; j++)
        {

            if (prodnum[i] == table[0][j])
            {
                if (quantity[i] > table[2][j])
                {
                    printf("\nStock was isnufficient to complete order %d.", prodnum[i]);
                    temp[j] = table[2][j];
                    quantity[i] = table[2][j];
                    table[3][j] = quantity[i] * table[1][j];
                    table[2][j] = 0;
                    totalBill = totalBill + table[3][j];
                }
                else
                {
                    temp[j] = quantity[i];
                    table[2][j] = table[2][j] - quantity[i];
                    table[3][j] = quantity[i] * table[1][j];
                    totalBill = totalBill + table[3][j];
                }
            }
        }
    }
    return totalBill;
}
void mainDisplay(int numOfProd, int *prodnum, int *temp, int **table, char **prodName)
{
    for (int i = 0; i < numOfProd; i++)
    {
        if (i == 0)
        {
            cout << prodName[i] << "\t\t";
            file << prodName[i] << "\t\t";
        }
        else
        {
            cout << prodName[i] << "\t";
            file << prodName[i] << "\t";
        }

        for (int j = 0; j < (SIZE - 1); j++)
        {

            cout << table[j][i] << "\t";
            file << table[j][i] << "\t";
        }
        cout << endl;
        file << endl;
    }
}

int main()
{
    //Initialization
    file.open("data.txt");
    int **table = new int *[4];

    table[0] = new int[SIZE]{101, 102, 103, 104}; //prodNum
    char **prodName = new char *[SIZE];           //prodName
    {
        prodName[0] = new char[50]{'S', 'o', 'a', 'p', '\0'};
        prodName[1] = new char[50]{'H', 'a', 'n', 'd', ' ', 'W', 'a', 's', 'h', '\0'};
        prodName[2] = new char[50]{'D', 'i', 's', 'h', ' ', 'W', 'a', 's', 'h', '\0'};
        prodName[3] = new char[50]{'T', 'a', 'b', 'l', 'e', ' ', 'C', 'l', 'e', 'a', 'n', 'e', 'r', '\0'};
    }
    table[1] = new int[SIZE]{60, 200, 150, 350}; //retails
    table[2] = new int[SIZE]{10, 20, 30, 40};    //quant
    table[3] = new int[SIZE];                    //amount

Restart:

    display(table, prodName);

    int numOfProd, prodnum[SIZE] = {0}, quantity[SIZE] = {0}, temp[SIZE] = {0};
    float totalBill = 0;
    int flag = 0;
    cout << "\nEnter the number of products you want to purchase:";
    cout << "\nNOTE: You can only purchase at most " << SIZE << " products: ";

    //Products Insertion
    cin >> numOfProd;
    numOfProd = prodValid(numOfProd);

    //Product Number Validation
    prodNumValid(numOfProd, prodnum, quantity, table);

    //Billing
    totalBill = billing(prodnum, table, quantity, temp);

    if (totalBill != 0)
    {
        cout << endl
             << "Product Name\tCode\tRetail\tQuantity"
             << endl;
    }
    //Main Display
    mainDisplay(numOfProd, prodnum, temp, table, prodName);

    if (totalBill != 0)
    {

        cout << "\nTotal Bill = " << totalBill;
    }
    else
    {
        cout << "\nNo items were purchased. The bill was zero.";
    }

    char choice;
    cout << "\nPress 'y' to continue shopping: ";
    cin >> choice;
    if (choice == 'y')
    {
        goto Restart;
    }
    else
    {
        cout << "\nHave a nice day :)";
    }
}