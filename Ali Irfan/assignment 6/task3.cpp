#include <iostream>
#include <string>
using namespace std;
int serial[10] = {0};
char key[10] = {'T', 'F', 'T', 'T', 'T', 'F', 'T', 'F', 'F', 'T'};

int main()
{
    int marks[10];
    cout << "Enter your serial numbers: \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> serial[i];
        for (int j = 0; j < j; j++)
        {
            if (serial[j] == serial[i])
            {
                cout << "Already assigned to someone. Try Again:  \n";
                cin >> serial[i];
            }
        }
    }
    char answers[10] = {0};
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter answers student (T/F)" << i + 1 << endl;
        int total = 0;

        for (int j = 0; j < 10; j++)
        {
            cin >> answers[j];
            if (answers[j] != ' ')
            {
                if (key[j] == answers[j])
                {
                    total += 2;
                }
                else if (key[j] != answers[j])
                {
                    total -= 1;
                }
            }
        }
        marks[i] = total;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if (marks[i] < marks[j])
            {
                char temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }
    cout << "Winner student is: " << serial[0] << " with " << marks[0] << endl;
    cout << "Runner up student is: " << serial[0] << " with " << marks[0] << endl;

    for (int i = 2; i < 10; i++)
    {
        cout << serial[i] << " with " << marks[i] << endl;
    }

    char choice;
    cout << "Do you want to change key:(y/n) ";
    cin >> choice;
    if (choice == 'y')
    {
        cout << "Enter key answers\n";
        for (int i = 0; i < 10; i++)
        {
            cin >> key[i];
        }
    }
}