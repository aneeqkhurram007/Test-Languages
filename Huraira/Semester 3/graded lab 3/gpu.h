#include <iostream>
using namespace std;
class gpu
{
private:
    char *memoryType;
    char *busInterface;
    int rpm;
    int capacity;
    int buffer;

public:
    gpu(const char *memoryType = new char[0], const char *busInterface = new char[0], int rpm = 0, int capacity = 0, int buffer = 0);
    gpu(const gpu &obj);
    char *deepCopy(char *dest, const char *source) const;
    void setmemoryType(const char *memoryType);
    void setbusInterface(const char *busInterface);
    void setrpm(const int rpm);
    void setcapacity(const int capacity);
    void setBuffer(const int buffer);

    char *getmemoryType() const;
    char *getbusInterface() const;
    int getrpm() const;
    int getcapacity() const;
    int getBuffer() const;

    void display();
    ~gpu();
};
