#include <iostream>
#include <string.h>
#include "account.h"
using namespace std;
class Checking : public Account
{
private:
    int accBal;
    string accountTitle;
    string accountNumber;

public:
    Checking()
    {
    }
    Checking(int bal, string title, string accNum)
    {
        accBal = bal;
        accountTitle = title;
        accountNumber = accNum;
    }
    void deposit(int amount)
    {
        cout << "Rupees " << 50 << " is charged on your transaction" << endl;
        accBal += amount - 50;
    }
    void withdraw(int amount)
    {
        cout << "Rupees " << 50 << " is charged on your transaction" << endl;
        accBal -= amount - 50;
    }
    ~Checking()
    {
        cout << "----------------------------------------------" << endl;
    }
};
