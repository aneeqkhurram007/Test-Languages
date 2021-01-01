#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("data.txt");
    int *arr = new int(10);
    int i;
    int *even = new int(5);
    int *odd = new int(5);
    for (i = 0; !file.eof() && i < 10; i++)
    {
        file >> arr[i];
        cout << arr[i];
    }
    for (int j = 0, e = 0, o = 0; j < 10; j++)
    {
        if (arr[j] % 2 == 0)
        {
            even[e] = arr[j];
            e++;
        }
        else
        {
            odd[o] = arr[j];
            o++;
        }
    }

    for (int j = 0; j < 5; j++)
    {
        for (int e = 0; e < 5; e++)
        {
            if (even[j] > even[e])
            {
                int temp = even[j];
                even[j] = even[e];
                even[e] = temp;
            }
        }
        for (int o = 0; o < 5; o++)
        {
            if (odd[j] > odd[o])
            {
                int temp = odd[j];
                odd[j] = even[o];
                odd[o] = temp;
            }
        }
    }
    for (int j = 0; j < 5; j++)
    {
        cout << even[j] << " ";
    }
    for (int j = 0; j < 5; j++)
    {
        cout << odd[j] << " ";
    }

    delete[] even;
    delete[] odd;
    delete[] arr;
    cout << i << endl;
}