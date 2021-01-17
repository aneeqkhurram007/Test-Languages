#include <iostream>
using namespace std;
int main()
{

    int matA[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            int temp = matA[i][j];
            matA[i][j] = matA[j][i];
            matA[j][i] = temp;
        }
        if (i == 1)
        {
            int temp = matA[0][1];
            matA[0][1] = matA[1][0];
            matA[1][0] = temp;

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