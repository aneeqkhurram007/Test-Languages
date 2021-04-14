#include <iostream>
#include "helperFunctions.h"
#pragma once
using namespace std;
class Bike
{
    char *name;
    char *manufacturer;
    char *color;
    int year;

public:
    Bike();
    Bike(const char *name = new char[25]{}, const char *manufacturer = new char[25],
         const char *color = new char[25]{}, int year = 0);
    Bike(const Bike &obj);
    char *getName();
    void setName(const char *name);

    char *getManufacturer();
    void setManufacturer(const char *manufacturer);

    char *getColor();
    void setColor(const char *color);

    int getYear();
    void setYear(int year);

    void display();

    ~Bike();
};
