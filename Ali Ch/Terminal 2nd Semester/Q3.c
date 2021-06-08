#include <stdio.h>
int sumOfArrays(int arr1[3][3]);
int main()
{
    int arr1[3][3] = {0};
    printf("\nEnter values in 2-D array of 3X3");

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter values in row # %d ", (i + 1));
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter value in col # %d row # %d: ", (j + 1), (i + 1));
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\nResult = %d", sumOfArrays(arr1));
}
int sumOfArrays(int arr1[3][3])
{
    int sumOfRows = 0;
    int sumOfCols = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sumOfRows += sumOfRows + arr1[i][j];
            sumOfCols += sumOfCols + arr1[i][j];
        }
    }
    if (sumOfRows == sumOfCols)
    {
        printf("\nBoth rows and columns have equal sum.");
        return 0;
    }
    else
    {
        printf("\nBoth rows and columns have not equal sum.");

        return 1;
    }
}
