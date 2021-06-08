#include "mothBoard.h"
mothBoard::mothBoard(const char *model, const char *make, const char *options, int frontSideBus)
{
    setModel(model);
    setMake(make);
    setoptions(options);
    setfrontSideBus(frontSideBus);
}
mothBoard::mothBoard(const mothBoard &obj)
{
    setModel(obj.model);
    setMake(obj.make);
    setoptions(obj.options);
    setfrontSideBus(obj.frontSideBus);
}
char *mothBoard::deepCopy(char *detination, const char *source) const
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
void mothBoard::setModel(const char *model)
{
    this->model = deepCopy(this->model, model);
}
void mothBoard::setMake(const char *make)
{
    this->make = deepCopy(this->make, make);
}
void mothBoard::setoptions(const char *options)
{
    this->options = deepCopy(this->options, options);
}
void mothBoard::setfrontSideBus(const int frontSideBus)
{
    this->frontSideBus = frontSideBus;
}

char *mothBoard::getModel() const
{
    return this->model;
}
char *mothBoard::getMake() const
{
    return this->make;
}
char *mothBoard::getoptions() const
{
    return this->options;
}
int mothBoard::getfrontSideBus() const
{
    return this->frontSideBus;
}

void mothBoard::display()
{
    cout << "mothBoard" << endl;
    cout << "Model: " << model << " Make: " << make << " options: " << options << " frontSideBus: " << frontSideBus << endl;
}
