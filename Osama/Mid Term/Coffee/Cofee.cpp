#include <iostream>
using namespace std;
class Cofee
{
public:
    Cofee();
    int display()
    {
        int choice;
        cout << "Please Select the Coffee you want: ";
        cout << "Press 1 for Cappucino." << endl;
        cout << "Press 2 for Mocha." << endl;
        cout << "Press 3 for Americano." << endl;
        cout << "Press 4 for Latte." << endl;
        cout << "Press 5 for Macchiato." << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        return choice;
    }
    void coffee()
    {
        int choice = display();
        switch (choice)
        {
        case 1:
            cout << "Cappucino is ready...";
            break;
        case 2:
            cout << "Mocha is ready...";
            break;
        case 3:
            cout << "Americano is ready...";
            break;
        case 4:
            cout << "Latte is ready...";
            break;
        case 5:
            cout << "Macchiato is ready...";
            break;

        default:
            break;
        }
    }
};

int main()
{
    Cofee cof;
    cof.coffee();

    return 0;
}