#include <iostream>
#include "Address.h"
#include "Location.h"
#pragma once
using namespace std;

class Huraira_Cafe
{
    char *name;
    char *cuisine;
    int seatingCapacity;
    Location location;
    Address address;

    char *deepCopy(char *dest, const char *src) const;

public:
    Huraira_Cafe();
    Huraira_Cafe(const char *name, const char *cuisine, int seatingCapacity, const Location *location, const Address *address);
    Huraira_Cafe(const Huraira_Cafe &obj);

    void setName(const char *name);
    char *getName() const;

    void setCuisine(const char *cuisine);
    char *getCuisine() const;

    void setSeatingCapacity(int seatingCapacity);
    int getSeatingCapacity() const;

    void display();

    void setLocation(const Location *location);
    Location *getLocation() const;

    void setAddress(const Address *address);
    Address *getAddress() const;

    friend ostream &operator<<(ostream &output, const Huraira_Cafe &obj);
    friend istream &operator>>(istream &input, const Huraira_Cafe &obj);

    void operator=(const Huraira_Cafe &obj);

    ~Huraira_Cafe();
};
