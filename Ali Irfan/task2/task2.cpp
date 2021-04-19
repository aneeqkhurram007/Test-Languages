#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file;
    file.open("file.txt", ios::in);
    char country[9] = "Pakistan";
    char temp[9] = {0};

    int count = 0;
    int i, flag;

    while (!file.eof())
    {
        i = 0;
        flag = 0;
        file >> temp[i];
        while (i < 8)
        {
            if (temp[i] != country[i])
            {
                flag = 1;
                break;
            }
            i++;
            file >> temp[i];
        }

        if (flag == 0)
        {
            count++;
        }
    }

    cout << country << " is repeated " << count << " times." << endl;
    file.close();
    return 0;
}