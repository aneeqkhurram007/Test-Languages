#include <iostream>
#include <fstream>

using namespace std;

char even[20] = {0};
int e = 0;

char odd[20] = {0};
int o = 0;

void length(char arr[]);
void Even(int l);
void Odd(int l);
int main()
{
    fstream file;
    file.open("data.txt");

    char arr[100] = {'\0'};
    char temp[25] = {'\0'};

    while (!file.eof())
    {
        file.getline(arr, 20, ' ');
        for (int i = 0; arr[i] != '\0'; i++)
        {
            temp[i] = arr[i];
        }
        length(temp);
    }

    cout << "\nWords with even length: " << e << endl;
    cout << "\nWords with odd length: " << o << endl;
}
void length(char arr[])
{

    int i;
    for (i = 0; arr[i] != '\0'; i++)
    {
    }
    if (i % 2 == 0)
    {
        Even(i);
    }
    else
    {
        Odd(i);
    }
}
void Even(int l)
{

    even[e] = l;
    e++;
}
void Odd(int l)
{
    odd[o] = l;
    o++;
}