#include <iostream>
using namespace std;
class Location
{
    char *latitude;
    char *longitude;

    char *deepCopy(char *dest, const char *src) const;

public:
    Location();
    Location(const char *latitude, const char *longitude);
    Location(const Location &obj);

    void setLatitude(const char *latitude);
    char *getLatitude() const;

    void setLongitude(const char *longitude);
    char *getLongitude() const;

    void display();

    friend ostream &operator<<(ostream &output, const Location &obj);
    friend istream &operator>>(istream &input, const Location &obj);

    void operator=(const Location &obj);

    ~Location();
};
