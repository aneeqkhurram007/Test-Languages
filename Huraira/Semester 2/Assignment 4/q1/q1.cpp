#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("data.txt");
    int arr[10] = {0};
    int even[10] = {0};
    int odd[10] = {0};
    for (int i = 0; !file.eof() && i < 10; i++)
    {
        file >> arr[i];
    }

    for (int i = 0, e = 0, o = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[e] = arr[i];
            e++;
        }
        else
        {
            odd[o] = arr[i];
            o++;
        }
    }

    for (int j = 0; j < 5; j++)
    {
        for (int e = 0; e < 5; e++)
        {
            if (even[j] < even[e])
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
                odd[j] = odd[o];
                odd[o] = temp;
            }
        }
    }
    for (int j = 0; j < 5; j++)
    {
        arr[j] = even[j];
        arr[j + 5] = odd[j];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
}