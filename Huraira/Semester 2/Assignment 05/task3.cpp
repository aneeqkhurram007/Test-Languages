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
        int MatA[rowA][colA], MatB[rowB][colB];
        int resMat[rowB][colA] = {0};
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
        for (int i = 0, j; i < rowB; i++)
        {

            for (j = 0; j < colA; j++)
            {
                resMat[i][j] += MatA[i][j] * MatB[i][j];
                cout << resMat[i][j] << " ";
            }
            cout << "\n";
        }
    }
}