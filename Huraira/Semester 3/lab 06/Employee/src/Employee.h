#include "Date.h"
#include "helperFunctions.h"
using namespace std;
class Employee
{
    char *name;
    char *employeeCode;
    Date date;
    Date currentDate = Date(14, 04, 2021);

public:
    Employee(const char *name = new char[25]{'\0'},
             const char *employeeCode = new char[25]{'\0'},
             Date date = Date(1, 1, 1));
    Employee(const Employee &obj);

    char *getName();
    void setName(const char *name);

    char *getEmployeeCode();
    void setEmployeeCode(const char *employeeCode);

    Date getDate();
    void setDate(Date date);
    void display();
    void numberOfDays();
    ~Employee();
};
