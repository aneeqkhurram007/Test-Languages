#include "BankAccount.h"
class SavingAccount : public BankAccount
{
private:
    float interestRate;

public:
    SavingAccount(const char *BankName = new char[25]{'\0'},
                  const char *Branch = new char[25]{'\0'}, float TotalCash = 0,
                  float interestRate = 0);
    SavingAccount(const SavingAccount &obj);

    void setInterestRate(const float interestRate);
    float getInterestRate() const;

    float calculateInterest();
    void display();
};
