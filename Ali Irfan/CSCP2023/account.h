#include <iostream>
#include <string.h>
using namespace std;
class Account
{
private:
    int accBal;
    string accountTitle;
    string accountNumber;

public:
    Account()
    {
        cout << "Nothing has enterd" << endl;
    }
    Account(int bal, string title, string accNum)
    {
        accBal = bal;
        accountTitle = title;
        accountNumber = accNum;
    }
    void display()
    {
        cout << "Account Title: " << accountTitle << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << accBal << endl;
    }
    void deposit(int amount)
    {
        cout << "Amount " << amount << " deposited" << endl;
        accBal += amount;
    }
    void withdraw(int amount)
    {
        cout << "Amount " << amount << " withdrawn" << endl;

        accBal -= amount;
    }
    ~Account()
    {
        cout << "----------------------------------------------" << endl;
    }
};
