#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream file;
    file.open("data.txt");
    int **table = new int *[4];
    int size = 4;
    table[0] = new int[size]{101, 102, 103, 104}; //prodNum
    char **prodName = new char *[size];           //prodName
    {
        prodName[0] = new char[50];
        prodName[1] = new char[50];
        prodName[2] = new char[50];
        prodName[3] = new char[50];
    }
    table[1] = new int[size]{60, 200, 150, 350}; //retails
    table[2] = new int[size]{10, 20, 30, 40};    //quant
    table[4] = new int[size];                    //amount

    for (int i = 0; i < 4; i++)
    {
        // for (int j = 0; j < 4; j++)
        // {
        //     /* code */
        // }
        // gets(prodName[i]);
        // cout << prodName[i] << " ";
        for (int j = 0; j < 4; j++)
        {
            cout << table[j][i] << " ";
        }
        cout << endl;
    }
}