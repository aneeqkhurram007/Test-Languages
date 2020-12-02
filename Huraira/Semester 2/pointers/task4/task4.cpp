#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    int arr[10];

    file.open("data.txt");

    for (int i = 0; !file.eof(); i++)
    {
        file >> arr[i];
    }

    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        int temp = *(ptr + i);
        *(ptr + i) = *(ptr + i + 5);
        *(ptr + i + 5) = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << *(ptr + i) << " ";
    }
}