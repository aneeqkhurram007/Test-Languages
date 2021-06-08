#include "ram.h"
ram::ram(const char *model, const char *make, const char *technology, int space)
{
    setModel(model);
    setMake(make);
    setTechnology(technology);
    setSpace(space);
}
ram::ram(const ram &obj)
{
    setModel(obj.model);
    setMake(obj.make);
    setTechnology(obj.technology);
    setSpace(obj.space);
}
char *ram::deepCopy(char *detination, const char *source) const
{
    int size = 0;
    for (int i = 0; source[i] != '\0'; i++)
    {
        size++;
    }

    detination = new char[size];
    for (int i = 0; i < size; i++)
    {
        detination[i] = source[i];
    }
    return detination;
}
void ram::setModel(const char *model)
{
    this->model = deepCopy(this->model, model);
}
void ram::setMake(const char *make)
{
    this->make = deepCopy(this->make, make);
}
void ram::setTechnology(const char *technology)
{
    this->technology = deepCopy(this->technology, technology);
}
void ram::setSpace(const int space)
{
    this->space = space;
}

char *ram::getModel() const
{
    return this->model;
}
char *ram::getMake() const
{
    return this->make;
}
char *ram::getTechnology() const
{
    return this->technology;
}
int ram::getSpace() const
{
    return this->space;
}

void ram::display()
{
    cout << "Ram" << endl;
    cout << "Model: " << model << " Make: " << make << " Technology: " << technology << " Space: " << space << endl;
}
