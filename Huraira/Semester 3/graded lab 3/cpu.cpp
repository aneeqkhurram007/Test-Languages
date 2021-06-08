#include "cpu.h"
using namespace std;
cpu::cpu(const char *model, const char *make, int frequency, int serialNumber)
{
    setModel(model);
    setMake(make);
    setFrequency(frequency);
    setSerialNumber(serialNumber);
}
cpu::cpu(const cpu &obj)
{
    setModel(obj.model);
    setMake(obj.make);
    setFrequency(obj.frequency);
    setSerialNumber(obj.serialNumber);
}
char *cpu::deepCopy(char *detination, const char *source) const
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
void cpu::setModel(const char *model)
{
    this->model = deepCopy(this->model, model);
}
void cpu::setMake(const char *make)
{
    this->make = deepCopy(this->make, make);
}
void cpu::setFrequency(const int frequency)
{
    this->frequency = frequency;
}
void cpu::setSerialNumber(const int serialNumber)
{
    this->serialNumber = serialNumber;
}

char *cpu::getModel() const
{
    return this->model;
}
char *cpu::getMake() const
{
    return this->make;
}
int cpu::getFrequency() const
{
    return this->frequency;
}
int cpu::getSerialNumber() const
{
    return this->serialNumber;
}

void cpu::display()
{
    cout << "CPU" << endl;
    cout << "Model: " << model << " Make: " << make << " Frequency: " << frequency << " Serial Number: " << serialNumber << endl;
}
