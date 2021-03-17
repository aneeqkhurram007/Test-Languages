#include <iostream>
#include <fstream>
using namespace std;

int *regrow(int *arr, int *size)
{
    int oldSize = *size;
    *size *= 2;
    int *temp = new int[*size];
    for (int i = 0; i < oldSize; i++)
    {
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = NULL;
    return temp;
}

void numberSeperation(fstream *file)
{
    int temp;
    int evenSIZE = 10, oddSIZE = 10;
    int *evenArr = new int[evenSIZE]{0};
    int *oddArr = new int[oddSIZE]{0};
    int e = 0, o = 0;
    do
    {
        *file >> temp;
        if (temp % 2 == 0)
        {
            evenArr[e] = temp;
            e++;
            if (e == evenSIZE)
            {
                evenArr = regrow(evenArr, &evenSIZE);
            }
        }
        else
        {

            oddArr[o] = temp;
            o++;
            if (o == oddSIZE)
            {
                oddArr = regrow(oddArr, &oddSIZE);
            }
        }

    } while (temp != 0);
    cout << "Even Array: " << endl;
    for (int i = 0; evenArr[i] != 0; i++)
    {
        cout << evenArr[i] << " ";
    }

    cout << "\nOdd Array: " << endl;
    for (int i = 0; oddArr[i] != 0; i++)
    {
        cout << oddArr[i] << " ";
    }
}
int main()
{

    fstream file;
    file.open("task1.txt");

    numberSeperation(&file);
}