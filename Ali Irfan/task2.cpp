#include <iostream>
using namespace std;
int main()
{
    char std[5];
    int count;
    cout << "Enter grade for student # 1: ";
    cin >> std[0];
    cout << "Enter grade for student # 2: ";
    cin >> std[1];
    cout << "Enter grade for student # 3: ";
    cin >> std[2];
    cout << "Enter grade for student # 4: ";
    cin >> std[3];
    cout << "Enter grade for student # 5: ";
    cin >> std[4];

    for (int i = 0; i < 5; i++)
    {
        count = 0;
        switch (i)
        {
        case 0:
            for (int i = 0; i < 5; i++)
            {
                if (std[i] == 'A')
                {
                    count++;
                }
            }
            cout << "\nTotal number of A grades are = " << count;

            break;
        case 1:

            for (int i = 0; i < 5; i++)
            {
                if (std[i] == 'B')
                {
                    count++;
                }
            }
            cout << "\nTotal number of B grades are = " << count;
            break;
        case 2:
            for (int i = 0; i < 5; i++)
            {
                if (std[i] == 'C')
                {
                    count++;
                }
            }
            cout << "\nTotal number of C grades are = " << count;
            break;
        case 3:
            for (int i = 0; i < 5; i++)
            {
                if (std[i] == 'D')
                {
                    count++;
                }
            }
            cout << "\nTotal number of D grades are = " << count;
            break;
        case 4:
            for (int i = 0; i < 5; i++)
            {
                if (std[i] == 'F')
                {
                    count++;
                }
            }
            cout << "\nTotal number of F grades are = " << count;
            break;
        default:
            break;
        }
    }
}