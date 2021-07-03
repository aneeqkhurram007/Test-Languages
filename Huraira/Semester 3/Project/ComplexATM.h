#include "ATM.h"
class ComplexATM : public ATM
{
private:
public:
    ComplexATM(const User &user = User(), const Card &card = Card());
    ComplexATM(const ComplexATM &obj);
    int transaction();
    ComplexATM operator^(const int PIN);
    ComplexATM operator%(const int money);
};
