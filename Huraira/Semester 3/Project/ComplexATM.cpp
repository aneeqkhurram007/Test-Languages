#include "ComplexATM.h"
ComplexATM::ComplexATM(const User &user, const Card &card) : ATM(user, card)
{
    setUser(user);
    setCard(card);
}
int ComplexATM::transaction()
{
    cout << "Press 1 to withdrawal" << endl;
    cout << "Press 2 for balance inquiry" << endl;
    cout << "Press 3 tp transfer money" << endl;
    cout << "Press 4 to change your PIN" << endl;
    cout << "Press 5 to display information" << endl;
    cout << "Press any key to terminate" << endl;
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}
ComplexATM ComplexATM::operator^(const int PIN)
{
    Card card;
    cout << "Enter your card details: ";
    cin >> card;
    if (this->getCard() == card)
    {
        this->getUser().getCard().setPINNumber(PIN);
        this->getCard().setPINNumber(PIN);
    }
    return ComplexATM(this->getUser(), this->getCard());
}
ComplexATM ComplexATM::operator%(const int money)
{
    Card card;
    cout << "Enter your card details: ";
    cin >> card;

    if (money > 0 && this->getCard() == card)
    {
        this->getUser().getAccount().setTotalCash(this->getUser().getAccount().getTotalCash() + money);
    }
    else
    {
        cout << "Sorry trasnaction cannot proceed" << endl;
    }
}