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
void ATM::validate()
{
    if (getUser().getCard() == getCard())
    {
        cout << "Ok, You can proceed" << endl;
    }
    else
    {
        cout << "Invaild Credendtials" << endl;
    }
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
    this->card = card;
}
Card ATM::getCard() const
{
    return this->card;
}
