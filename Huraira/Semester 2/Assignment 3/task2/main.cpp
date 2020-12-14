#include <iostream>
#include <fstream>
using namespace std;
int main()
{

    fstream file;
    file.open("input.txt");
    int arr[10];
    //Step 1
    for (int i = 0; !file.eof(); i++)
    {
        file >> arr[i];
    }
    //Step 2
    int resArr[7] = {0};
    //Step 3 && Step4
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i + 1) == arr[j])
            {
                resArr[i]++;
            }
        }
        // cout << resArr[i];
    }
    //Step 5
    for (int i = 0, j = 0; i < 10; i++)
    {

        arr[i] = 0;
        if (resArr[i] == 1)
        {
            arr[j] = i + 1;

            j++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] != 0)
        {
            cout << arr[i] << " ";
        }
    }
}