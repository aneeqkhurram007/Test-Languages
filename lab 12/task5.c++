#include <iostream>
using namespace std;
int main()
{

    int array[10] = {10, 4, 5, 6, 4, 3, 4, 1, 6, 4}, num, count = 0, i, j;
    cout << "Enter a number: ";
    cin >> num;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            int temp = array[i];
            if (temp == array[j])
            {
                count++;
            }
        }
    }
}