#include "Card.h"
#include "SavingAccount.h"

class User
{
private:
    char *Name;
    int PhoneNumber;
    char *Address;
    SavingAccount account;
    Card card;
    char *deepCopy(char *dst, const char *src) const;

public:
    User(const char *Name = new char[25],
         int PhoneNumber = 0, const char *Address = new char[25]);
    User(const User &obj);
    void setName(const char *Name);
    char *getName() const;
    void setPhoneNumber(const int PhoneNumber);
    int getPhoneNumber() const;
    void setAddress(const char *Address);
    char *getAddress() const;
    void setAccount(SavingAccount account);
    SavingAccount getAccount() const;
    void setCard(Card card);
    Card getCard() const;
    friend ostream &operator<<(ostream &output, const User &obj)
    {
        output << "Name: " << obj.getName() << " PhoneNumber: " << obj.getPhoneNumber()
               << " Address: " << obj.getAddress() << "\nAccount Details: " << obj.getAccount()
               << "\nCard: " << obj.getCard()
               << endl;
        return output;
    }
    friend istream &operator>>(istream &input, User &obj)
    {
        char *Name = new char[25];
        char *Address = new char[25];

        input >> Name >> obj.PhoneNumber >> Address >> obj.account >> obj.card;

        obj.setName(Name);
        obj.setAddress(Address);
        return input;
    }

    void display();
    ~User();
};
