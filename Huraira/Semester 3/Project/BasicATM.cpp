#include "BasicATM.h"
BasicATM::BasicATM(const User &user, const Card &card) : ATM(user, card)
{

    setUser(user);
    setCard(card);
}
BasicATM::BasicATM(const BasicATM &obj)
{
    setUser(obj.getUser());
    setCard(obj.getCard());
}
int BasicATM::transaction()
{
    int choice;
    cout << "Press 1 to withdrawal" << endl;
    cout << "Press 2 to display information" << endl;
    cout << "Your choice: ";
    cin >> choice;
    return choice;
}