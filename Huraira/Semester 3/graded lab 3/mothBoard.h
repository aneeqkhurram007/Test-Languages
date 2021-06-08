#include <iostream>
using namespace std;
class mothBoard
{
private:
    char *model;
    char *make;
    int frontSideBus;
    char *options;

public:
    mothBoard(const char *model = new char[0], const char *make = new char[0], const char *options = new char[0], int frontSideBus = 0);
    mothBoard(const mothBoard &obj);
    char *deepCopy(char *dest, const char *source) const;
    void setModel(const char *model);
    void setMake(const char *make);
    void setoptions(const char *options);
    void setfrontSideBus(const int frontSideBus);

    char *getModel() const;
    char *getMake() const;
    char *getoptions() const;
    int getfrontSideBus() const;

    void display();
    ~mothBoard();
};
