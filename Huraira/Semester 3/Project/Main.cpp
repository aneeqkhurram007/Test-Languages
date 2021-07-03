#include "ATM.h"
// #include "CheckingAccount.h"
int main()
{

    // BankAccount bank;
    Card card;
    User user;
    cout << "Enter User Details (Name,PhoneNumber,Address\nBankName,Branch,TotalCash,InterestRate\nCardNumber,PIN): " << endl;
    cin >> user;
    cout << user;

    cout << "Enter card details: " << endl;
    cin >> card;

    ATM atm(user, card);
    atm.validate();
    // cout << card;
    // // BankAccount bank("HBL", "Lahore", 73066);
    // bank.display();
    // cout << "Enter values in Bank: " << endl;
    // cin >> bank;
    // cout << bank;
}