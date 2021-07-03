#include <iostream>
using namespace std;
class BankAccount
{
private:
    char *BankName;
    char *Branch;
    float TotalCash;
    char *deepCopy(char *dst, const char *src) const;

public:
    BankAccount(const char *BankName = new char[25]{'\0'}, const char *Branch = new char[25]{'\0'}, float TotalCash = 0);
    BankAccount(const BankAccount &obj);

    void setBankName(const char *BankName);
    char *getBankName() const;

    void setBranch(const char *Branch);
    char *getBranch() const;

    void setTotalCash(const float TotalCash);
    float getTotalCash() const;

    void display();

    ~BankAccount();
};
