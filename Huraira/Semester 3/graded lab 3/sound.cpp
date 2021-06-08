#include "sound.h"
sound::sound(const char *model, const char *make, const char *input, int noOfChannels)
{
    setModel(model);
    setMake(make);
    setinput(input);
    setnoOfChannels(noOfChannels);
}
sound::sound(const sound &obj)
{
    setModel(obj.model);
    setMake(obj.make);
    setinput(obj.input);
    setnoOfChannels(obj.noOfChannels);
}
char *sound::deepCopy(char *detination, const char *source) const
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
void sound::setModel(const char *model)
{
    this->model = deepCopy(this->model, model);
}
void sound::setMake(const char *make)
{
    this->make = deepCopy(this->make, make);
}
void sound::setinput(const char *input)
{
    this->input = deepCopy(this->input, input);
}
void sound::setnoOfChannels(const int noOfChannels)
{
    this->noOfChannels = noOfChannels;
}

char *sound::getModel() const
{
    return this->model;
}
char *sound::getMake() const
{
    return this->make;
}
char *sound::getinput() const
{
    return this->input;
}
int sound::getnoOfChannels() const
{
    return this->noOfChannels;
}

void sound::display()
{
    cout << "sound" << endl;
    cout << "Model: " << model << " Make: " << make << " input: " << input << " noOfChannels: " << noOfChannels << endl;
}
