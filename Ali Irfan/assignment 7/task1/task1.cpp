#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file, file2;
    int i = 0;
    bool flag = true;
    char c1;
    char c2[10] = {'\0'};
    file.open("data.txt");
    file2.open("output.txt");

    if (file.is_open())
    {
        while (!file.eof())
        {
            file.get(c1);
            // cout << c1;
            while (c1 != 32)
            {

                c2[i] = c1;
                // cout << c2[i];
                if (i > 0 && c2[i] != c2[i - 1])
                {
                    flag = false;
                }
                file.get(c1);
                // cout << c1;
                i++;
            }
            // cout << "OK ";
            c2[i] = '\0';
            if (flag == true)
            {
                for (int j = 0; c2[j] != '\0'; j++)
                {
                    cout << c2[j];
                    file2 << c2[j];
                }
                cout << endl;
            }

            i = 0;
            flag = true;
        }
    }

    return 0;
}