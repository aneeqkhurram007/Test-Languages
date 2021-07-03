#include "ComplexATM.h"
int main()
{

    User user;
    Card card;
    cout << "Welcome to ATM" << endl;
    cout << "Register yourself: " << endl;
    cout << "Enter your details [Name, PhoneNumber, Address \nBankName, Branch, TotalCash\nCardNumber, PIN" << endl;
    cin >> user;
    cout << "Thanks for your registeration" << endl;
    cout << "You may proceed now." << endl;
    cout << "Enter your card details for further processing" << endl;
    cin >> card;

    ComplexATM atm(user, card);
    int money;
    int PIN;
    char choice;
    do
    {

        switch (atm.transaction())
        {
        case 1:
            -atm;
            break;
        case 2:
            *atm;
            break;
        case 3:
            cout << "Enter money to transfer: " << endl;
            cin >> money;
            atm % money;
            break;
        case 4:
            cout << "Enter PIN to change: " << endl;
            cin >> PIN;
            atm ^ PIN;
            break;
        case 5:
            cout << atm;
            break;

        default:
            break;
        }
        cout << "Want to start again(Y/N): ";
        cin >> choice;
    } while (choice == 'Y');
}