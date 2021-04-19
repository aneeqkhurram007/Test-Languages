#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input;
    ofstream output;

    input.open("input.txt", ios::in);
    output.open("output.txt", ios::out);

    char word1[11] = {'\0'};
    char word2[11] = {'\0'};

    input.getline(word1, 11);
    input.getline(word2, 11);

    for (int i = 0; i < 10; i++)
    {
        if (word1[i] == word2[i])
        {
            cout << word1[i];
            output << word1[i];
        }
    }
    cout << " ";
    output << " ";
    for (int i = 0; i < 10; i++)
    {
        if (word1[i] == word2[i])
        {
            cout << i + 1 << " ";
            output << i + 1 << " ";
        }
    }

    input.close();
    output.close();
    return 0;
}