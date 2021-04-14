#include <iostream>
#pragma once
using namespace std;
class Car
{
    char *name;
    int model;

public:
    Car(const char *name = new char[25]{}, int model = 0);
    Car(const Car &obj);
    char *getName();

    void setName(const char *name);

    int getModel();

    void setModel(int model);

    void display();
    ~Car();
};
