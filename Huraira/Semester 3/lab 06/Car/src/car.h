#pragma once
#include <iostream>
using namespace std;
class car
{

    char *name;
    int model;

public:
    car(char *name = new char[25], int model = 0);
    car(car &car);
    char *getName();
    void setName(char *name);
    int getModel();
    void setModel(int model);
    void display();
    ~car();
};
