#include <iostream>
#include <fstream>
using namespace std;

fstream file;
void update(int array[], int count);
int main()
{
    int arr[25];
    int count = 0;
    file.open("data.txt", ios::in | ios::out);

    for (int i = 0; !file.eof(); i++)
    {
        file >> arr[i];
        count++;
    }

    update(arr, count);
}
void update(int arr[], int count)
{
    int temp;
    file.clear();
    file.seekg(0);
    for (int i = 0; i < count / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[i + 5];
        arr[i + 5] = temp;
    }
    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
        file << arr[i] << " ";
    }
}