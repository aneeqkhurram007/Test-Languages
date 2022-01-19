#include <iostream>
#include <string.h>
#include "checking.h"
using namespace std;
class Current : public Checking
{
private:
    int accBal;
    string accountTitle;
    string accountNumber;

public:
    Current(int bal, string title, string accNum)
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
        if (accBal < 50)
        {
            cout << "Amount less than 50 cannot be withdraw" << endl;
        }
    }
    ~Current()
    {
        cout << "----------------------------------------------" << endl;
    }
};
