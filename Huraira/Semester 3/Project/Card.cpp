#include "Card.h"
Card::Card(int PINNumber)
{
    setCardNumber(CardNumberGenerator());
    setPINNumber(PINNumber);
}
Card::Card(const Card &obj)
{
    setCardNumber(obj.getCardNumber());
    setPINNumber(obj.getPINNumber());
}
void Card::setCardNumber(const int CardNumber)
{
    this->CardNumber = CardNumber;
}
int Card::getCardNumber() const
{
    return this->CardNumber;
}

void Card::setPINNumber(const int PINNumber)
{
    this->PIN = PINNumber;
}
int Card::getPINNumber() const
{
    return this->PIN;
}

int Card::CardNumberGenerator()
{
    int x = rand() + 10000;

    return x;
}
bool Card::operator==(const Card &obj)
{
    return this->getCardNumber() == obj.getCardNumber() && this->getPINNumber() == obj.getPINNumber();
}

Card ::~Card()
{
}
