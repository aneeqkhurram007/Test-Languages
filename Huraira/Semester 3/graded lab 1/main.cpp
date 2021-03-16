#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Please Enter size of rows: ";
    cin >> rows;
    cout << "Please Enter size of cols: ";
    cin >> cols;
    int **table = new int *[rows];
    int *Row = new int[rows];
    int *Col = new int[cols];
    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
        cout << "Enter values in " << i + 1 << " row of matrix." << endl;
        for (int j = 0; j < cols; j++)
        {
            cin >> table[i][j];
        }
    }

    int min;
    cout << "Rows:" << endl;
    //Minimum numbers from each row.

    for (int i = 0; i < rows; i++)
    {
        min = table[i][0];

        for (int j = 0; j < cols; j++)
        {
            if (min > table[i][j])
            {
                min = table[i][j];
            }
        }
        Row[i] = min;
        cout << Row[i] << endl;
    }

    //Maximum numbers from each col.
    int max;
    cout << "\nCols: ";
    for (int i = 0; i < rows; i++)
    {
        max = table[i][0];

        for (int j = 0; j < cols; j++)
        {
            if (max < table[j][i])
            {
                max = table[j][i];
            }
        }
        Col[i] = max;
        cout << Col[i] << " ";
    }
}