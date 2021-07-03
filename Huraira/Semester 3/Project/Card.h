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

    friend ostream &operator<<(ostream &output, const Card &obj)
    {
        output << "Card Details: " << obj.getCardNumber() << " PIN Number: " << obj.getPINNumber() << endl;
        return output;
    }
    friend istream &operator>>(istream &input, Card &obj)
    {
        input >> obj.CardNumber >> obj.PIN;
        return input;
    }
    bool operator==(const Card &obj);
    ~Card();
};
