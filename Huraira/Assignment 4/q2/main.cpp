#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char fileName[10];
    cout << "Enter file name: ";
    cin >> fileName;

    ofstream file;
    file.open(fileName);

    int *arr = new int(100);
    int oneDig[100] = {0}, twoDig[100] = {0};

    cout << "Enter data in file: " << endl;
    for (int i = 0, o = 0, t = 0; true; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            break;
        }
        if (arr[i] < 10)
        {
            oneDig[o] = arr[i];
            o++;
        }
        else
        {
            twoDig[t] = arr[i];
            t++;
        }

        file << arr[i] << " ";
    }
    cout << "One-digit: ";
    for (int i = 0; oneDig[i] != 0; i++)
    {
        cout << oneDig[i] << " ";
    }
    cout << "\nTwo-digit: ";
    for (int i = 0; twoDig[i] != 0; i++)
    {
        cout << twoDig[i] << " ";
    }
    delete[] arr;
}