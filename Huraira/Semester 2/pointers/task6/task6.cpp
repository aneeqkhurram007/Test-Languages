#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("data.txt");
    int arr[13];
    for (int i = 0; !file.eof(); i++)
    {
        file >> arr[i];
    }
    int *ptr = arr;

    for (int i = 0; i < 13; i++)
    {

        for (int j = i + 1; j < 13; j++)
        {
            if (*(ptr + j) == *(ptr + i))
            {
                *(ptr + j) = 0;
            }
        }
        if (*(ptr + i) != 0)
        {
            cout << *(ptr + i) << " ";
        }
    }
}