#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int rowA, rowB, colA, colB;

void mul(int **a, int **b)
{
    int mult[10][10], i, j, k;
    for (i = 0; i < rowA; ++i)
    {
        for (j = 0; j < colB; ++j)
        {
            mult[i][j] = 0;
        }
    }
    if (colA != rowB)
    {
        cout << "Multiplication is not possible." << endl;
    }
    else
    {
        for (i = 0; i < rowA; ++i)
        {
            for (j = 0; j < colB; ++j)
            {
                for (k = 0; k < colA; ++k)
                {
                    mult[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        cout << endl
             << "Output Matrix: " << endl;
        for (i = 0; i < rowA; ++i)
            for (j = 0; j < colB; ++j)
            {
                cout << " " << mult[i][j];
                if (j == colB - 1)
                    cout << endl;
            }
    }
}
void transpose(int **mat, int row, int column)
{
    int **transpose = mat;
    for (int i = 0; i < row; ++i)
        for (int j = 0; j < column; ++j)
        {
            transpose[j][i] = mat[i][j];
        }

    cout << "\nTranspose of Matrix: " << endl;
    for (int i = 0; i < column; ++i)
        for (int j = 0; j < row; ++j)
        {
            cout << " " << transpose[i][j];
            if (j == row - 1)
            {
                cout << endl
                     << endl;
            }
        }
}
int main()
{
    srand(time(NULL));

    cout << "Enter number of rows for rowA: ";
    cin >> rowA;
    cout << "Enter number of rows for colA: ";
    cin >> colA;

    cout << "Enter number of rows for rowB: ";
    cin >> rowB;
    cout << "Enter number of rows for colB: ";
    cin >> colB;

    int **matA = new int *[rowA];
    for (int i = 0; i < rowA; i++)
    {
        matA[i] = new int[colA];
        for (int j = 0; j < colA; j++)
        {
            matA[i][j] = rand() % 100;
        }
        cout << endl;
    }

    int **matB = new int *[rowB];
    for (int i = 0; i < rowA; i++)
    {
        matB[i] = new int[colB];
        for (int j = 0; j < colB; j++)
        {
            matB[i][j] = rand() % 100;
        }
    }
    transpose(matA, rowA, colA);
    transpose(matB, rowB, colB);

    mul(matA, matB);

    delete[] matA;
    delete[] matB;
}