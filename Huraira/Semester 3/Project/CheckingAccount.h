#include "BankAccount.h"

class CheckingAccount : public BankAccount
{
private:
    float feePerTransaction;

public:
    CheckingAccount(const char *BankName = new char[25]{'\0'}, const char *Branch = new char[25]{'\0'}, float TotalCash = 0, float feePerTransaction = 0);
    CheckingAccount(const CheckingAccount &obj);
    void setFeePerTransaction(const float feePerTransaction);
    float getFeePerTransaction() const;
    void display();
};
