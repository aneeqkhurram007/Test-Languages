#include <iostream>
using namespace std;
int main()
{
    int rowA, rowB, colA, colB;
    cout << "Enter size for Matrix A: " << endl;
    cout << "Enter row size: ";
    cin >> rowA;
    cout << "Enter col size: ";
    cin >> colA;
    cout << "Enter size for Matrix B: " << endl;
    cout << "Enter row size: ";
    cin >> rowB;
    cout << "Enter col size: ";
    cin >> colB;
    if (colA != rowB)
    {
        cout << "Sorry this Matrix cannot be formed. " << endl;
    }
    else
    {
        int MatA[rowA][colB] = {{1, 2, 3}, {4, 5, 6}}, MatB[rowB][colB] = {{9, 1}, {7, 2}, {8, 4}};
        int resMat[10][10] = {0};
        cout << "Enter elements in Matrix A: " << endl;
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colA; j++)
            {
                cin >> MatA[i][j];
            }
        }
        cout << "Enter elements in Matrix B: " << endl;
        for (int i = 0; i < rowB; i++)
        {
            for (int j = 0; j < colB; j++)
            {
                cin >> MatA[i][j];
            }
        }
        for (int i = 0; i < rowA; i++)
        {
            for (int j = 0; j < colB; j++)
            {
                resMat[i][j] = 0;
            }
        }

        float average = 0;
        int count = 0;
        for (int i = 0; i < rowA; ++i)
            for (int j = 0; j < colB; ++j)
                for (int k = 0; k < colA; ++k)
                {
                    resMat[i][j] += MatA[i][k] * MatB[k][j];
                }

        cout << endl
             << "Output Matrix: " << endl;
        for (int i = 0; i < rowA; ++i)
        {

            for (int j = 0; j < colB; ++j)
            {
                count++;
                average += resMat[i][j];
                cout << " " << resMat[i][j];
                if (j == colB - 1)
                    cout << endl;
            }
        }
        average /= count;
        cout << "\nAverage is: " << average;
    }
}