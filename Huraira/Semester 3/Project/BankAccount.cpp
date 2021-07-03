#include "BankAccount.h"
BankAccount::BankAccount(const char *BankName, const char *Branch, float TotalCash)
{
    setBankName(BankName);
    setBranch(Branch);
    setTotalCash(TotalCash);
}
BankAccount::BankAccount(const BankAccount &obj)
{
    setBankName(obj.getBankName());
    setBranch(obj.getBranch());
    setTotalCash(obj.getTotalCash());
}
char *BankAccount::deepCopy(char *dst, const char *src) const
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
    }
    dst = new char[i];
    for (i = 0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}
void BankAccount::setBankName(const char *BankName)
{
    this->BankName = deepCopy(this->BankName, BankName);
}
char *BankAccount::getBankName() const
{
    return this->BankName;
}

void BankAccount::setBranch(const char *Branch)
{
    this->Branch = deepCopy(this->Branch, Branch);
}
char *BankAccount::getBranch() const
{
    return this->Branch;
}

void BankAccount::setTotalCash(const float TotalCash)
{
    this->TotalCash = TotalCash;
}
float BankAccount::getTotalCash() const
{
    return this->TotalCash;
}

void BankAccount::display()
{
    cout << "Bank Name: " << getBankName() << endl;
    cout << "Branch: " << getBranch() << endl;
    cout << "Total Cash: " << getTotalCash() << endl;
}

BankAccount::~BankAccount()
{

    delete[] this->BankName;
    this->BankName = NULL;

    delete[] this->Branch;
    this->Branch = NULL;
}