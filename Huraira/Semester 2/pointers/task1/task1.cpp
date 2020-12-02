#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("input.txt");
    int arr[10];
    for (int i = 0; !file.eof(); i++)
    {
        file >> arr[i];
    }

    int *ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        cout << *(ptr + i) << endl;
    }
}