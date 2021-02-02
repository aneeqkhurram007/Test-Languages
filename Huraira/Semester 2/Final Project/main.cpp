#include <iostream>
#include <fstream>
#include <string>
using namespace std;
fstream file;
int SIZE = 4;
void tableDisplay(int **table, int j)
{

    cout << "Product Code: " << table[0][j] << "\t";
    cout << "Retail Price: " << table[1][j] << "\t";
    cout << "Quantity: " << table[2][j] << "\n";
}

void tableFDisplay(int **table, int j, fstream *file)
{

    cout << "Product Code: " << table[0][j] << "\t";
    *file << "Product Code: " << table[0][j] << "\t";

    cout << "Retail Price: " << table[1][j] << "\t";
    *file << "Retail Price: " << table[1][j] << "\t";

    cout << "Quantity: " << table[2][j] << "\n";
    *file << "Quantity: " << table[2][j] << "\n";
}

void display(int **table, char **prodName, int size)
{
    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {

        cout << "Product Name: " << prodName[i] << endl;

        tableDisplay(table, i);

        cout << endl;
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
void mainDisplay(int **table, char **prodName)
{
    file << "-------------------------------" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Product Name: " << prodName[i] << endl;

        tableFDisplay(table, i, &file);

        cout << endl;
    }
}

int **regrowTable(int **table, int size)
{
    int oldSize = size, i, j;
    int **temp = new int *[oldSize];
    for (i = 0; i < oldSize; i++)
    {
        temp[i] = new int[SIZE];
        for (j = 0; j < oldSize; j++)
        {
            temp[i][j] = table[i][j];
        }
    }
    temp[0][SIZE - 1] = temp[0][j - 1] + 1;
    cout << "Enter retail price: ";
    cin >> temp[1][SIZE - 1];
    cout << "Enter quantity: ";
    cin >> temp[2][SIZE - 1];

    delete[] table;
    return temp;
}
char **regrowName(char **prodName)
{
    int oldSize = SIZE;
    SIZE += 1;
    char **temp = new char *[SIZE];
    for (int i = 0, j; i < oldSize; i++)
    {
        temp[i] = new char[50];
        for (j = 0; prodName[j] != '\0'; j++)
        {
            temp[i][j] = prodName[i][j];
        }
        temp[i][j] = '\0';
    }
    temp[SIZE - 1] = new char[50];

    cout << "Enter Product Name: ";
    fflush(stdin);
    cin.getline(temp[SIZE - 1], 50);

    delete[] prodName;
    prodName = NULL;
    return temp;
}

int **shrinkTable(int **table, int size)
{
    int code;
    cout << "Enter product Code: ";
    cin >> code;
    int oldSize = size;
    int **temp = new int *[oldSize];
    for (int i = 0, k = 0; i < oldSize; i++)
    {

        temp[i] = new int[SIZE];
        if (code != temp[0][i])
        {
            for (int j = 0; j < oldSize; j++)
            {

                temp[k][j] = table[i][j];
            }
            k++;
        }
    }
    delete[] table;
    return temp;
}
char **shrinkName(char **prodName)
{
    int oldSize = SIZE;
    SIZE -= 1;
    char **temp = new char *[SIZE];

    char name[50];

    cout << "Enter Product Name: ";
    fflush(stdin);
    cin.getline(name, 50);

    for (int i = 0, j, k = 0; i < oldSize; i++)
    {
        if (name != prodName[i])
        {
            temp[k] = new char[50];
            for (j = 0; prodName[j] != '\0'; j++)
            {
                temp[k][j] = prodName[i][j];
            }
            temp[k][j] = '\0';
            k++;
        }
    }

    delete[] prodName;
    prodName = NULL;
    return temp;
}

int main()
{
    file.open("data.txt");
    int size = 4;
    int **table = new int *[size];

    table[0] = new int[SIZE]{101, 102, 103, 104};
    char **prodName = new char *[SIZE];
    {
        prodName[0] = new char[50]{'S', 'o', 'a', 'p', '\0'};
        prodName[1] = new char[50]{'H', 'a', 'n', 'd', ' ', 'W', 'a', 's', 'h', '\0'};
        prodName[2] = new char[50]{'D', 'i', 's', 'h', ' ', 'W', 'a', 's', 'h', '\0'};
        prodName[3] = new char[50]{'S', 'h', 'a', 'm', 'p', 'o', 'o', '\0'};
    }
    table[1] = new int[SIZE]{60, 200, 150, 350};
    table[2] = new int[SIZE]{10, 20, 30, 40};
    table[3] = new int[SIZE];

    cout << "\t\tInventory System\n"
         << endl;
    cout << "Prepared By: Abu Huraira\t\tL1S20BSSE0027\n"
         << endl;

Restart:

    int option;

    cout << "\nPress 0 for Purchase a Product" << endl;
    cout << "Press 1 for View Products: " << endl;
    cout << "Press 2 for Add a Product: " << endl;
    cout << "Press 3 for Delete a Product: " << endl;
    cout << "Press 4 for Exit" << endl;
    cout << "Enter your option: ";
    cin >> option;
    switch (option)
    {
    case 0:
    {
        int numOfProd, prodnum[SIZE] = {0}, quantity[SIZE] = {0}, temp[SIZE] = {0};
        float totalBill = 0;
        int flag = 0;
        cout << "\nEnter the number of products you want to purchase:";
        cout << "\nNOTE: You can only purchase at most " << SIZE << " products: ";

        cin >> numOfProd;
        numOfProd = prodValid(numOfProd);

        prodNumValid(numOfProd, prodnum, quantity, table);

        totalBill = billing(prodnum, table, quantity, temp);

        if (totalBill != 0)
        {
            cout << endl
                 << "Product Name\tCode\tRetail\tQuantity"
                 << endl;
        }
        mainDisplay(table, prodName);

        if (totalBill != 0)
        {

            cout << "\nTotal Bill = " << totalBill;
        }
        else
        {
            cout << "\nNo items were purchased. The bill was zero.";
        }
    }

    break;
    case 1:
        display(table, prodName, size);
        break;
    case 2:
        prodName = regrowName(prodName);

        table = regrowTable(table, size);
        break;
    case 3:
        prodName = shrinkName(prodName);

        table = shrinkTable(table, size);

        break;
    case 4:
        return 0;
    default:
        cout << "You entered wrong input.";
        break;
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