#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file1, file2;
    int frequency = 0;
    int flag = 0;

    file1.open("word.txt");
    char arr[5];
    for (int i = 0; !file1.eof() && i < 5; i++)
    {
        file1 >> arr[i];
    }
    file2.open("multiple.txt");

    for (int i = 0; !file2.eof() && i < 7; i++)
    {

        char temp[5];

        if (i == 5)
        {
            char temp[3];
            for (int k = 0; k < 3; k++)
            {
                file2 >> temp[k];
            }

            for (int j = 0; j < 3; j++)
            {
                if (arr[j] == temp[j])
                {
                    flag = 0;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        else
        {
            char temp[5];

            for (int k = 0; k < 5; k++)
            {
                file2 >> temp[k];
            }

            for (int j = 0; j < 5; j++)
            {
                if (arr[j] == temp[j])
                {
                    flag = 0;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            ++frequency;
        }
    }
    cout << "The frequency of word Happy is " << frequency << endl;
}
