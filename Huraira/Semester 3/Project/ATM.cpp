#include "ATM.h"
ATM::ATM(const User &user, const Card &card)
{
    setUser(user);
    setCard(card);
}
ATM::ATM(const ATM &obj)
{
    setUser(obj.getUser());
    setCard(obj.getCard());
}
bool ATM::validate(const Card &obj)
{
    if (getUser().getCard() == obj)
    {
        cout << "Ok, You can proceed" << endl;
        return true;
    }
    else
    {
        cout << "Invaild Credendtials" << endl;
        return false;
    }
}
ATM ATM::operator-()
{
    int withdraw;
    cout << "Enter amount to WithDraw: ";
    cin >> withdraw;
    setWithdraw(withdraw);
    this->getUser().getAccount().setTotalCash(getUser().getAccount().getTotalCash() - getWithDraw());
    return ATM(getUser(), getCard());
}

void ATM::operator*()
{
    cout << " Account Details with balance: " << getUser();
}
void ATM::setWithdraw(const int withdraw)
{

    if (this->getUser().getAccount().getTotalCash() > withdraw)
    {
        this->withDraw = withdraw;
    }
}
int ATM::getWithDraw() const
{
    return this->withDraw;
}

void ATM::setUser(const User &user)
{
    this->user = user;
}
User ATM::getUser() const
{
    return this->user;
}

void ATM::setCard(const Card &card)
{
    while (!validate(card))
    {
        cout << "Try Again" << endl;
        Card card;
        cin >> card;
    }
    this->card = card;
}
Card ATM::getCard() const
{
    return this->card;
}
