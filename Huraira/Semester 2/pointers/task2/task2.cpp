#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("input.txt");
    int arr[10];
    int flag;

    for (int i = 0; !file.eof(); i++)
    {
        file >> arr[i];
    }

    int *ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        flag = 0;

        for (int j = 2; j < *(ptr + i); j++)
        {
            if (*(ptr + i) % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << *(ptr + i) << " ";
        }
    }
}