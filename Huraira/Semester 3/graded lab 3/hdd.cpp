#include "hdd.h"
hdd::hdd(const char *model, const char *make, int rpm, int capacity, int buffer)
{
    setModel(model);
    setMake(make);
    setrpm(rpm);
    setcapacity(capacity);
    setBuffer(buffer);
}
hdd::hdd(const hdd &obj)
{
    setModel(obj.model);
    setMake(obj.make);
    setrpm(obj.rpm);
    setcapacity(obj.capacity);
    setBuffer(obj.buffer);
}
char *hdd::deepCopy(char *detination, const char *source) const
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
void hdd::setModel(const char *model)
{
    this->model = deepCopy(this->model, model);
}
void hdd::setMake(const char *make)
{
    this->make = deepCopy(this->make, make);
}
void hdd::setrpm(const int rpm)
{
    this->rpm = rpm;
}
void hdd::setcapacity(const int capacity)
{
    this->capacity = capacity;
}
void hdd::setBuffer(const int buffer)
{
    this->buffer = buffer;
}

char *hdd::getModel() const
{
    return this->model;
}
char *hdd::getMake() const
{
    return this->make;
}
int hdd::getrpm() const
{
    return this->rpm;
}
int hdd::getcapacity() const
{
    return this->capacity;
}

int hdd::getBuffer() const
{
    return this->buffer;
}

void hdd::display()
{
    cout << "hdd" << endl;
    cout << "Model: " << model << " Make: " << make << " rpm: " << rpm << " Serial Number: " << capacity << " Buffer: " << buffer << endl;
}
