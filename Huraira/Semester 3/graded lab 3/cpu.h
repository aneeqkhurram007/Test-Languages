#include <iostream>

class cpu
{
private:
    char *model;
    char *make;
    int frequency;
    int serialNumber;

public:
    cpu(const char *model = new char[0], const char *make = new char[0], int frequency = 0, int serialNumber = 0);
    cpu(const cpu &obj);
    char *deepCopy(char *dest, const char *source) const;
    void setModel(const char *model);
    void setMake(const char *make);
    void setFrequency(const int frequency);
    void setSerialNumber(const int serialNumber);

    char *getModel() const;
    char *getMake() const;
    int getFrequency() const;
    int getSerialNumber() const;

    void display();
    ~cpu();
};
