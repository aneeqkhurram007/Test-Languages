#include <iostream>
using namespace std;
class Card
{
private:
    int CardNumber;
    int PIN;

public:
    Card(int PIN = 0);
    Card(const Card &obj);

    void setCardNumber(const int CardNumber);
    int getCardNumber() const;

    void setPINNumber(const int PINNumber);
    int getPINNumber() const;

    int CardNumberGenerator();

    ~Card();
};
