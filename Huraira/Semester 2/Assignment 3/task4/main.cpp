#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file, file1;
    file.open("input.txt");
    file1.open("output.txt");
    for (int i = 0; !file.eof(); i++)
    {
        char arr[10];
        int count = 0;
        file.getline(arr, 10);
        for (int i = 0; arr[i] != 0; i++)
        {
            file1 << arr[i];
            if (arr[i] < 97)
            {
                arr[i] += 32;
            }
            count++;
        }
        int flag;
        for (int i = 0; i < count; i++)
        {
            flag = 0;
            if (arr[i] != arr[count - i - 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            file1 << " Not Palindrome";
        }
        else
        {
            file1 << " Palindrome";
        }

        file1 << "\n";
    }
}