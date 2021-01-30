#include <iostream>
#include <fstream>
using namespace std;
void sum(int **matA, int rows, int *cols)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < *(cols + i); j++)
        {
            sum += matA[i][j];
        }
    }
    cout << "Sum of Matrix is " << sum << endl;
}
void average(int **matA, int rows, int *cols)
{
    int i, j, k = 0;
    int sum = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < *(cols + i); j++)
        {
            sum += matA[i][j];
            k++;
        }
    }
    cout << "Average of Matrix is " << sum / k << endl;
}
void rowWiseSorting(int **matA, int rows, int *cols)
{
    cout << "Row Wise Sorting of Matrix: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < *(cols + i); j++)
        {
            cout << matA[i][j] << " ";
        }
        cout << endl;
    }
}
void twoAThreeA(int **matA, int rows, int *cols)
{
    cout << "Matrix for the 2A + 3A" << endl;
    int **resMat = matA;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < *(cols + i); j++)
        {
            resMat[i][j] = 2 * matA[i][j] + 3 * matA[i][j];
            cout << resMat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    fstream file;
    int rows;
    file.open("data.txt");
    file >> rows;
    int cols[rows] = {0};
    int **matA = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        file >> cols[i];
        matA[i] = new int[cols[i]];
        for (int j = 0; j < cols[i]; j++)
        {
            file >> matA[i][j];
        }
    }
    cout << endl;
    sum(matA, rows, cols);
    average(matA, rows, cols);
    rowWiseSorting(matA, rows, cols);
    twoAThreeA(matA, rows, cols);
}