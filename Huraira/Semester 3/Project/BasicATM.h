#include "ATM.h"
class BasicATM : public ATM
{
private:
    int withdraw;

public:
    BasicATM(const User &user = User(), const Card &card = Card());
    BasicATM(const BasicATM &obj);
    int transaction();
};
