#include <iostream>
#include <fstream>
using namespace std;

fstream file;
void update(int array[], int count);
int main()
{
    int arr[25];
    int count = 0;
    file.open("data1.txt", ios::in | ios::out);

    for (int i = 0; !file.eof(); i++)
    {
        file >> arr[i];
        count++;
    }

    update(arr, count);
}
void update(int arr[], int count)
{

    fstream file2;
    file2.open("data2.txt");
    file.clear();
    file.seekg(0);
    for (int i = 0; i < count; i++)
    {
        int check = 0;
        for (int j = i; j < count - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                check++;
                if (check > 2)
                {
                    cout << arr[i] << " ";
                    file2 << arr[i] << " ";
                    arr[i] = 0;
                }
            }
        }
    }
}