#include "Car.h"
#include "helperFunctions.h"

Car::Car(const char *name, int model)
{
    setName(name);
    setModel(model);
}

Car ::Car(const Car &obj)
{
    setName(obj.name);
    setModel(obj.model);
}

Car::~Car()
{
    delete this->name;
}
char *Car::getName()
{
    return this->name;
}
void Car::setName(const char *name)
{
    this->name = new char[25]{'\0'};
    Functions function;

    this->name = function.deepCopy(name);
}

int Car::getModel()
{
    return this->model;
}
void Car::setModel(int model)
{
    this->model = model;
}

void Car::display()
{
    cout << "Car: " << getName() << endl;
    cout << "Model: " << getModel() << endl;
}