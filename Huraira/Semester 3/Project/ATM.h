#include "User.h"
class ATM
{
private:
    User user;
    Card card;

public:
    ATM(const User &user, const Card &card);
    ATM(const ATM &obj);
    void validate();
    void setUser(const User &user);
    User getUser() const;

    void setCard(const Card &card);
    Card getCard() const;
};
