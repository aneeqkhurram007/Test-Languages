#include <iostream>
#include <string.h>
#include "account.h"
using namespace std;
class Saving : public Account
{
private:
    int accBal;
    string accountTitle;
    string accountNumber;
    int interestRate;

public:
    Saving(int bal, string title, string accNum, int interest)
    {
        accBal = bal;
        accountTitle = title;
        accountNumber = accNum;
        interestRate = interest;
    }
    void calculateInterest()
    {
        int interest = accBal * interestRate;
        cout << "The insterest on your balance is = " << interest << endl;
    }

    ~Saving()
    {
        cout << "----------------------------------------------" << endl;
    }
};
