#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("input.txt");
    int count;
    for (int i = 0; !file.eof(); i++)
    {
        char arr[6];
        count = 0;
        file.getline(arr, 6);
        for (int i = 0; arr[i] != '\0'; i++)
        {
            cout << arr[i];
            count++;
        }
        cout << " " << count << endl;
    }
}