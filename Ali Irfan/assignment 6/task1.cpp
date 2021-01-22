#include <iostream>
#include <string>
using namespace std;
int main()
{
    char cString1[50], cString2[50];
    cout << "Enter C-String 1: ";
    cin.getline(cString1, 25);
    cout << "Enter C-String 2: ";
    cin.getline(cString2, 25);

    char choice;

    do
    {
        cout << "\nPress \"c\" for copy c-string 1 to the c-string 2" << endl;
        cout << "Press \"s\" for sorting both c-strings in ascending and descending order" << endl;
        cout << "Press \"t\" for concatenate c-string 2 with c-string 1" << endl;
        cout << "Press \"e\" for exit" << endl;
        cout << "Press \"r\" for take input both c-strings again" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        int i = 0;

        switch (choice)
        {
        case 'c':
            cout << "Copy String Started....." << endl;
            for (i = 0; cString1[i] != '\0'; i++)
            {
                cString2[i] = cString1[i];
            }
            cout << "C String 1: " << cString1 << endl;
            cout << "C String 2: " << cString2 << endl;

            break;
        case 's':
            cout << "String sorting started..... " << endl;
            cout << "C-String 1: " << endl;
            for (i = 0; cString1[i] != '\0'; i++)
            {
                for (int j = i; cString1[j] != '\0'; j++)
                {
                    if (cString1[i] > cString1[j])
                    {
                        char temp = cString1[i];
                        cString1[i] = cString1[j];
                        cString1[j] = temp;
                    }
                }
            }
            cout << "C-String 1 in Ascending Order: " << cString1 << endl;
            cout << "C-String 1 in Descending Order: ";
            for (int j = i - 1; j >= 0; j--)
            {
                cout << cString1[j];
            }

            cout << "C-String 2: " << endl;
            for (i = 0; cString2[i] != '\0'; i++)
            {
                for (int j = i; cString2[j] != '\0'; j++)
                {
                    if (cString2[i] > cString2[j])
                    {
                        char temp = cString2[i];
                        cString2[i] = cString2[j];
                        cString2[j] = temp;
                    }
                }
            }
            cout << "C-String 1 in Ascending Order: " << cString2 << endl;
            cout << "C-String 1 in Descending Order: ";
            for (int j = i - 1; j >= 0; j--)
            {
                cout << cString2[j];
            }

            break;
        case 't':
            cout << "Concatination Started...." << endl;
            cout << "Concatenated String : " << cString1 << " " << cString2 << endl;
            break;
        case 'r':
            cout << "Enter C-String 1: ";
            fflush(stdin);
            cin.getline(cString1, 25);
            cout << "Enter C-String 2: ";
            fflush(stdin);
            cin.getline(cString2, 25);

            break;
        default:
            break;
        }

    } while (choice != 'e');
}