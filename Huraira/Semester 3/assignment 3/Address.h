#include <iostream>
using namespace std;
class Address
{
    char *houseNumber;
    char *streetNumber;
    char *city;
    char *country;

    char *deepCopy(char *dest, const char *src) const;

public:
    Address();
    Address(const char *houseNumber, const char *streetNumber, const char *city, const char *country);
    Address(const Address &obj);
    void setHouseNumber(const char *houseNumber);
    char *getHouseNumber() const;

    void setStreetNumber(const char *streetNumber);
    char *getStreetNumber() const;

    void setCity(const char *city);
    char *getCity() const;

    void setCountry(const char *country);
    char *getCountry() const;

    void display();

    friend ostream &operator<<(ostream &output, const Address &obj);
    friend istream &operator>>(istream &input, const Address &obj);

    void operator=(const Address &obj);

    ~Address();
};
