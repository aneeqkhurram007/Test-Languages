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
    char *User::deepCopy(char *dst, const char *src) const;

public:
    User(const char *Name = new char[25],
         int PhoneNumber = 0, const char *Address = new char[25],
         SavingAccount account = NULL, Card card = NULL);
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
    void display();
    ~User();
};
