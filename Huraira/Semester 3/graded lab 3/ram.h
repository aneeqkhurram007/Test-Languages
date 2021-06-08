#include <iostream>
using namespace std;
class ram
{
private:
    char *model;
    char *make;
    int space;
    char *technology;

public:
    ram(const char *model = new char[0], const char *make = new char[0], const char *technology = new char[0], int space = 0);
    ram(const ram &obj);
    char *deepCopy(char *dest, const char *source) const;
    void setModel(const char *model);
    void setMake(const char *make);
    void setTechnology(const char *technology);
    void setSpace(const int space);

    char *getModel() const;
    char *getMake() const;
    char *getTechnology() const;
    int getSpace() const;

    void display();
    ~ram();
};
