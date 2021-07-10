#include "Student.h"
Student::Student(char *firstName, char *lastName, char *course, double finalAverage, char *finalGrade)
{
    setFirstName(firstName);
    setLastName(lastName);
    setCourse(course);
    setAverage(finalAverage);
    setFinalGrade(finalGrade);
}
Student::Student(const Student &obj)
{
    setFirstName(obj.getFirstName());
    setLastName(obj.getLastName());
    setCourse(obj.getCourse());
    setAverage(obj.getAverage());
    setFinalGrade(obj.getFinalGrade());
}
char *Student::deepCopy(char *dst, const char *src) const
{
    int i;
    for (i = 0; src[i] != '\0'; i++)
    {
    }
    dst = new char[i];
    for (i = 0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}

void Student::setFirstName(const char *firstName)
{
    this->firstName = deepCopy(this->firstName, firstName);
}
char *Student::getFirstName() const
{
    return this->firstName;
}

void Student::setLastName(const char *lastName)
{
    this->lastName = deepCopy(this->lastName, lastName);
}
char *Student::getLastName() const
{
    return this->lastName;
}

void Student::setCourse(const char *course)
{
    this->course = deepCopy(this->course, course);
}
char *Student::getCourse() const
{
    return this->course;
}
void Student::setAverage(const double average)
{
    this->finalAverage = average;
}
double Student::getAverage() const
{
    return this->finalAverage;
}

void Student::setFinalGrade(const char *finalGrade)
{
}
char *Student::getFinalGrade() const
{
}

Student::~Student()
{
}