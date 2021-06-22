#include "Huraira_Cafe.h"
char *Huraira_Cafe::deepCopy(char *dest, const char *src) const
{
    int count = 0;
    for (int i = 0; src[i] != 0; i++)
    {
        count++;
    }
    dest = new char[count];
    for (int i = 0; i < count; i++)
    {
        dest[i] = src[i];
    }
    return dest;
}
Huraira_Cafe::Huraira_Cafe()
{
    setName("Huraira's Cafe");
    setSeatingCapacity(300);
    setCuisine("Italian");
    setLocation(new Location());
    setAddress(new Address());
}
Huraira_Cafe::Huraira_Cafe(const char *name, const char *cuisine, int seatingCapacity, const Location *location, const Address *address)
{
    setName(name);
    setSeatingCapacity(seatingCapacity);
    setCuisine(cuisine);
    setLocation(location);
    setAddress(address);
}
Huraira_Cafe::Huraira_Cafe(const Huraira_Cafe &obj)
{
    setName(obj.getName());
    setSeatingCapacity(obj.getSeatingCapacity());
    setCuisine(obj.getCuisine());
    setLocation(obj.getLocation());
    setAddress(obj.getAddress());
}
void Huraira_Cafe::setName(const char *name)
{
    this->name = deepCopy(this->name, name);
}
char *Huraira_Cafe::getName() const
{

    return this->name;
}
void Huraira_Cafe::setCuisine(const char *cuisine)
{
    this->cuisine = deepCopy(this->cuisine, cuisine);
}
char *Huraira_Cafe::getCuisine() const
{

    return this->cuisine;
}
void Huraira_Cafe::setSeatingCapacity(int seatingCapacity)
{

    (seatingCapacity > 0) ? this->seatingCapacity = seatingCapacity : this->seatingCapacity = 1;
}
int Huraira_Cafe::getSeatingCapacity() const
{
    return this->seatingCapacity;
}

ostream &operator<<(ostream &output, const Huraira_Cafe &obj)
{
    output << "Name: " << obj.name << " Cuisine: " << obj.cuisine << " Seating Capacity: " << obj.seatingCapacity
           << " Location: " << obj.location << " Address: " << obj.address;
    return output;
}
istream &operator>>(istream &input, const Huraira_Cafe &obj)
{
    input >> obj.name >> obj.cuisine >> obj.location >> obj.address;
    return input;
}

void Huraira_Cafe::operator=(const Huraira_Cafe &obj)
{
}
