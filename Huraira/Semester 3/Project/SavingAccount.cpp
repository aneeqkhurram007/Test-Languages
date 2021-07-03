#include "SavingAccount.h"
SavingAccount ::SavingAccount(const char *BankName, const char *Branch,
                              float TotalCash, float interestRate) : BankAccount(BankName, Branch, TotalCash)
{
    setInterestRate(interestRate);
}
SavingAccount::SavingAccount(const SavingAccount &obj)
{
    setBankName(obj.getBankName());
    setBranch(obj.getBranch());
    setTotalCash(obj.getTotalCash());
    setInterestRate(obj.getInterestRate());
}
void SavingAccount::setInterestRate(const float interestRate)
{
    this->interestRate = interestRate;
}
float SavingAccount::getInterestRate() const
{
    return this->interestRate;
}

float SavingAccount::calculateInterest()
{
    return getTotalCash() - (getTotalCash() * (getInterestRate() / 100));
}

void SavingAccount::display()
{
    BankAccount::display();

    cout << "Interset Rate: " << getInterestRate() << endl;
    cout << "Value afterInterest : " << calculateInterest();
}