#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("data.txt");
    int origArr[10];
    int resArr[10] = {0};
    for (int i = 0; !file.eof(); i++)
    {

        file >> origArr[i];
    }
    //Step 1
    resArr[0] = origArr[0];
    //Step 2 && Step 3
    for (int i = 1; i < 10; i++)
    {
        if (origArr[i] == resArr[i - 1])
        {
            resArr[i - 1] = 0;
        }
        else
        {
            resArr[i] = origArr[i];
        }
    }
    //Step 4
    for (int i = 0, j = 0; i < 10; i++)
    {
        origArr[i] = 0;
        if (resArr[i] != 0)
        {
            origArr[j] = resArr[i];
            j++;
        }
    }
    for (auto &&i : origArr)
    {
        cout << i << " ";
    }
}