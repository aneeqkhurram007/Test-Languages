#include <iostream>
#include <fstream>
using namespace std;

fstream file;
void factorial(int arr[])
{
    file.seekg(0);
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < 10)
        {
            int temp = arr[i];
            for (int j = 1; j < temp; j++)
            {
                arr[i] = arr[i] * j;
            }
        }
        file << arr[i] << " ";
        cout << arr[i] << " ";
    }
}

int main()
{
    file.open("data.txt");
    int arr[10] = {0};

    for (int i = 0; !file.eof(); i++)
    {
        file >> arr[i];
    }
    factorial(arr);
    file.close();
}