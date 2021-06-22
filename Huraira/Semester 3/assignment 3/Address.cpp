#include "Address.h";
char *Address::deepCopy(char *dest, const char *src) const
{
    int count = 0;
    for (int i = 0; src[i] != 0; i++)
    {
        count++;
    }
    dest = new char[count];
    for (int i = 0; i < count; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}

Address::Address()
{
    setHouseNumber("37D");
    setStreetNumber("Block L");
    setCity("Lahore");
    setCountry("Pakistan");
}
Address::Address(const char *houseNumber, const char *streetNumber, const char *city, const char *country)
{
    setHouseNumber(houseNumber);
    setStreetNumber(streetNumber);
    setCity(city);
    setCountry(country);
}
Address::Address(const Address &obj)
{
    setHouseNumber(obj.getHouseNumber());
    setStreetNumber(obj.getStreetNumber());
    setCity(obj.getCity());
    setCountry(obj.getCountry());
}
void Address::setHouseNumber(const char *houseNumber)
{
    this->houseNumber = deepCopy(this->houseNumber, houseNumber);
}
char *Address::getHouseNumber() const
{
    return this->houseNumber;
}
void Address::setStreetNumber(const char *streetNumber)
{
    this->streetNumber = deepCopy(this->streetNumber, streetNumber);
}
char *Address::getStreetNumber() const
{
    return this->streetNumber;
}
void Address::setCity(const char *city)
{
    this->city = deepCopy(this->city, city);
}
char *Address::getCity() const
{
    return this->city;
}
void Address::setCountry(const char *country)
{
    this->country = deepCopy(this->country, country);
}
char *Address::getCountry() const
{
    return this->country;
}
void Address::display()
{
    cout << "Address: " << endl;
    cout << "House Number: " << getHouseNumber();
    cout << "\nStreetNunmber: " << getStreetNumber();
    cout << "\nCity: " << getCity();
    cout << "\nCountry: " << getCountry();
}
ostream &operator<<(ostream &output, const Address &obj)
{
    output << "House Number: " << obj.houseNumber << " Street Number: " << obj.streetNumber << " City: " << obj.city << " Country: " << obj.country;
    return output;
}
istream &operator>>(istream &input, const Address &obj)
{

    input >> obj.houseNumber >> obj.streetNumber >> obj.city >> obj.country;
    return input;
}

void Address::operator=(const Address &obj)
{
    setHouseNumber(obj.houseNumber);
    setStreetNumber(obj.streetNumber);
    setCity(obj.city);
    setCountry(obj.country);
}

Address::~Address()
{
    delete[] this->houseNumber;
    this->houseNumber = NULL;

    delete[] this->streetNumber;
    this->streetNumber = NULL;

    delete[] this->city;
    this->city = NULL;

    delete[] this->country;
    this->country = NULL;
}