#include <iostream>
using namespace std;
class sound
{
private:
    char *model;
    char *make;
    int noOfChannels;
    char *input;

public:
    sound(const char *model = new char[0], const char *make = new char[0], const char *input = new char[0], int noOfChannels = 0);
    sound(const sound &obj);
    char *deepCopy(char *dest, const char *source) const;
    void setModel(const char *model);
    void setMake(const char *make);
    void setinput(const char *input);
    void setnoOfChannels(const int noOfChannels);

    char *getModel() const;
    char *getMake() const;
    char *getinput() const;
    int getnoOfChannels() const;

    void display();
    ~sound();
};
