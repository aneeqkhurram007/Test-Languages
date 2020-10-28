#include <iostream>
#include <fstream>

using namespace std;
string line;
int main()
{
    char text[100] = {'\0'};

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

        if (temp[j] != ' ')
        {
            file1 << temp[j];
            cout << temp[j];
        }
        else
        {
            file1 << " " << j << "\n";
            cout << " " << j << "\n";
            j = -1;
        }
    }
}