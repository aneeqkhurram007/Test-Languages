#include <iostream>
#include <fstream>
using namespace std;
void check_Status();
void check_avg();
void Mininmum();
void Maximum();
void Report();
int main()
{
    char arr[129];
    int size = 0;
    fstream file;
    file.open("PF.txt");
    for (int i = 0; !file.eof() && i < 129; i++)
    {
        file >> arr[i];
        size++;
    }
    file.seekg(0);
    int roll[10];
    int marks[10];
    for (int i = 0, j = 0, z = 0; !file.eof() && i < 29; i++, j++, z++)
    {
        if (i >= 2)
        {
            if (i % 2 == 0)
            {
                file >> roll[j];
                j++;
            }
            else
            {
                file >> marks[z];
                z++;
            }
        }
        else
        {
            if (i % 2 == 0)
            {
                file >> roll[j];
                j++;
            }
            else
            {
                file >> marks[z];
                z++;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << roll[i];
        cout << marks[i];
    }

    Report();
}
void check_Status() {}
void check_avg() {}
void Mininmum() {}
void Maximum() {}
void Report() {}