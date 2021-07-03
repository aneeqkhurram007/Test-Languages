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

    friend ostream &operator<<(ostream &output, const BankAccount &obj)
    {
        output << "BankName: " << obj.getBankName() << " Branch: " << obj.getBranch()
               << " Total Cash: " << obj.getTotalCash();
        return output;
    }
    friend istream &operator>>(istream &input, BankAccount &obj)
    {
        char *BankName = new char[25];
        char *Branch = new char[25];
        int TotalCash;
        input >> BankName >> Branch >> TotalCash;
        obj.setBankName(BankName);
        obj.setBranch(Branch);
        obj.setTotalCash(TotalCash);
        return input;
    }

    ~BankAccount();
};
