#include "Bike.h"
Functions function;
Bike::Bike()
{
}
Bike::Bike(const char *name, const char *manufacturer, const char *color, int year)
{
    setName(name);
    setManufacturer(manufacturer);
    setColor(color);
    setYear(year);
}

Bike::Bike(const Bike &obj)
{
    setName(obj.name);
    setManufacturer(obj.manufacturer);
    setColor(obj.color);
    setYear(obj.year);
}

Bike::~Bike()
{
    delete this->name;
    name = NULL;

    delete this->manufacturer;
    manufacturer = NULL;

    delete this->color;
    color = NULL;
}

char *Bike::getName()
{
    return this->name;
}
void Bike::setName(const char *name)
{
    this->name = new char[25]{'\0'};
    this->name = function.deepCopy(name);
}

char *Bike::getManufacturer()
{
    return this->manufacturer;
}
void Bike::setManufacturer(const char *manufacturer)
{
    this->manufacturer = new char[25]{'\0'};
    this->manufacturer = function.deepCopy(manufacturer);
}

char *Bike::getColor()
{
    return this->color;
}
void Bike::setColor(const char *color)
{
    this->color = new char[25]{'\0'};
    this->color = function.deepCopy(color);
}

int Bike::getYear()
{
    return this->year;
}
void Bike::setYear(int year)
{
    this->year = year;
}
void Bike::display()
{
    cout << "Name: " << getName() << endl;
    cout << "Manufacturer: " << getManufacturer() << endl;
    cout << "Color: " << getColor() << endl;
    cout << "Year: " << getYear() << endl;
}