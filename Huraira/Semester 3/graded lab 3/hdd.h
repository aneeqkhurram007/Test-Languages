#include <iostream>
using namespace std;
class hdd
{
private:
    char *model;
    char *make;
    int rpm;
    int capacity;
    int buffer;

public:
    hdd(const char *model = new char[0], const char *make = new char[0], int rpm = 0, int capacity = 0, int buffer = 0);
    hdd(const hdd &obj);
    char *deepCopy(char *dest, const char *source) const;
    void setModel(const char *model);
    void setMake(const char *make);
    void setrpm(const int rpm);
    void setcapacity(const int capacity);
    void setBuffer(const int buffer);

    char *getModel() const;
    char *getMake() const;
    int getrpm() const;
    int getcapacity() const;
    int getBuffer() const;

    void display();
    ~hdd();
};
