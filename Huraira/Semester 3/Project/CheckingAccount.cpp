#include "CheckingAccount.h"
CheckingAccount::CheckingAccount(const char *BankName, const char *Branch, float TotalCash, float feePerTransaction) : BankAccount(BankName, Branch, TotalCash)
{
    setBankName(BankName);
    setBranch(Branch);
    setTotalCash(TotalCash);
    setFeePerTransaction(feePerTransaction);
}
CheckingAccount::CheckingAccount(const CheckingAccount &obj)
{
    setBankName(obj.getBankName());
    setBranch(obj.getBranch());
    setTotalCash(obj.getTotalCash());
    setFeePerTransaction(obj.getFeePerTransaction());
}
void CheckingAccount::setFeePerTransaction(const float feePerTransaction)
{
    this->feePerTransaction = feePerTransaction;
}
float CheckingAccount::getFeePerTransaction() const
{
    return this->feePerTransaction;
}
void CheckingAccount::display()
{
    BankAccount::display();
    cout << "Fee Per Transaction: " << getFeePerTransaction() << endl;
}