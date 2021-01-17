#include <iostream>
using namespace std;
int main()
{

    int matA[3][3];
    int flag;
    cout << "Enter values in Matrix A: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matA[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            flag = 0;

            if (matA[i][j] % 2 == 0)
            {
                matA[0][0] = matA[i][j];
                matA[1][1] = matA[i][j];
                matA[2][2] = matA[i][j];
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    cout << "Updated Matrix is : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matA[i][j] << "  ";
        }
        cout << "\n";
    }
}