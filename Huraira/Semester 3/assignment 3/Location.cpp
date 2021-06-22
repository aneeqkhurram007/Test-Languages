#include "Location.h"
char *Location::deepCopy(char *dest, const char *src) const
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
Location::Location()
{
    setLatitude("23 North");
    setLongitude("24 South");
}
Location ::Location(const char *latitude, const char *longitude)
{
    setLatitude(latitude);
    setLongitude(longitude);
}
Location ::Location(const Location &obj)
{
    setLatitude(obj.getLatitude());
    setLongitude(obj.getLongitude());
}
Location ::~Location()
{
    delete[] latitude;
    latitude = NULL;
    delete[] longitude;
    longitude = NULL;
}

void Location::setLatitude(const char *latitude)
{

    this->latitude = deepCopy(this->latitude, latitude);
}

char *Location::getLatitude() const
{
    return this->latitude;
}

void Location::setLongitude(const char *longitude)
{
    this->longitude = deepCopy(this->longitude, longitude);
}
char *Location::getLongitude() const
{
    return this->longitude;
}

ostream &operator<<(ostream &output, const Location &obj)
{
    output << "latitude: " << obj.latitude << " Longitude: " << obj.longitude;
    return output;
}
istream &operator>>(istream &input, const Location &obj)
{

    input >> obj.latitude >> obj.longitude;
    return input;
}

void Location::operator=(const Location &obj)
{
    setLatitude(obj.latitude);
    setLongitude(obj.longitude);
}

void Location::display()
{

    cout << "Location:" << endl;
    cout << "Latitude: " << getLatitude() << endl;
    cout << "Longitude: " << getLongitude() << endl;
}
