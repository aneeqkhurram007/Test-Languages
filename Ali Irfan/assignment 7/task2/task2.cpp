#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1, file2, result;
    file1.open("data1.txt");
    file2.open("data2.txt");
    result.open("result.txt");

    int size1, size2;

    file1 >> size1;
    file2 >> size2;

    int arr1[size1] = {0};
    int arr2[size2] = {0};

    for (int i = 0; !file1.eof(); i++)
    {
        file1 >> arr1[i];
    }

    for (int i = 0; !file2.eof(); i++)
    {
        file2 >> arr2[i];
    }

    int count = 0;

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                result << arr1[i] << " ";
                count++;
            }
        }
    }
    cout << '\n'
         << count << endl;
    result << '\n'
           << count << endl;

    return 0;
}