#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
string line;
int main()
{
    char text[100] = {'\0'};
    char temp1;
    fstream file, file1;
    file.open("sentence.txt");
    file1.open("word.txt");
    char temp[20] = {'\0'};
    file.getline(text, 20, '.');
    for (int i = 0, j = 0; !(file.eof()); i++, j++)
    {

        temp[j] = text[i];
        if (temp[j] == '\0')
        {
            break;
        }

        if (temp[j] == ' ')
        {
            for (int y = 0; y < j - 1; y++)
            {
                for (int z = y + 1; z < j; z++)
                {
                    if (temp[y] < 97)
                    {
                        temp[y] = temp[y] + 32;
                        if (temp[y] > temp[z])
                        {
                            temp1 = temp[y];
                            temp[y] = temp[z];
                            temp[z] = temp1 - 32;
                        }
                    }
                    else
                    {
                        if (temp[y] > temp[z])
                        {
                            temp1 = temp[y];
                            temp[y] = temp[z];
                            temp[z] = temp1;
                        }
                    }
                }
            }
            file1 << temp;
            cout << temp;
            file1 << "\n";
            cout << "\n";
            j = -1;
        }
    }
}