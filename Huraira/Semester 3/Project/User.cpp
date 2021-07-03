#include "User.h"
User::User(const char *Name,
           int PhoneNumber, const char *Address, SavingAccount saving, Card card)
{

    setName(Name);
    setAddress(Address);
    setPhoneNumber(PhoneNumber);
    setAccount(saving);
    setCard(card);
}
User::User(const User &obj)
{
    setName(obj.getName());
    setAddress(obj.getAddress());
    setPhoneNumber(obj.getPhoneNumber());
    setAccount(obj.getAccount());
    setCard(obj.getCard());
}
char *User::deepCopy(char *dst, const char *src) const
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
void User::setName(const char *Name)
{
    this->Name = deepCopy(this->Name, Name);
}
char *User::getName() const
{
    return this->Name;
}
void User::setAddress(const char *Address)
{
    this->Address = deepCopy(this->Address, Address);
}
char *User::getAddress() const
{
    return this->Address;
}
void User::setPhoneNumber(const int PhoneNumber)
{
    this->PhoneNumber = PhoneNumber;
}
int User ::getPhoneNumber() const
{
    return this->PhoneNumber;
}

void User::setAccount(SavingAccount account)
{
    this->account = account;
}
SavingAccount User::getAccount() const
{
    return this->account;
}

void User::setCard(Card card)
{
    this->card = card;
}
Card User::getCard() const
{
    return this->card;
}
void User::display()
{

    cout << "Name: " << getName() << endl;
    cout << "Phone Number: " << getPhoneNumber() << endl;
    cout << "Address: " << getAddress() << endl;
    cout << " Account: " << getAccount() << endl;
    cout << "Card: " << getCard() << endl;
}