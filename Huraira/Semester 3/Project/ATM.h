#include "User.h"
class ATM
{
private:
    User user;
    Card card;
    int withDraw;

public:
    ATM(const User &user = User(), const Card &card = Card());
    ATM(const ATM &obj);
    bool validate(const Card &obj);
    void setUser(const User &user);
    User getUser() const;
    void setWithdraw(const int Withdraw);
    int getWithDraw() const;

    void setCard(const Card &card);
    Card getCard() const;

    friend ostream &operator<<(ostream &output, const ATM &obj)
    {
        output << "Account Details: " << obj.getUser() << endl;
        return output;
    }
    friend istream &operator>>(istream &input, ATM &obj)
    {
        input >> obj.user >> obj.card;
        return input;
    }
    ATM operator-();
    void operator*();
};
