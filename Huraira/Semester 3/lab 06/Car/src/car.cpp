#include "car.h"
car::car(char *name, int model)
{
    setName(name);
    setModel(model);
}
car::car(car &obj)
{
    setName(obj.getName());
    setModel(obj.getModel());
}
char *car::getName()
{
    return this->name;
}
void car::setName(char *name)
{
    this->name = name;
}

int car::getModel()
{
    return this->model;
}
void car::setModel(int model)
{
    this->model = model;
}
void car::display()
{
    cout << "Name: " << getName() << endl;
    cout << "Model: " << getModel() << endl;
}
car::~car()
{
    delete this->name;
}