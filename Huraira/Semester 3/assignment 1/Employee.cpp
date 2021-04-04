#include <iostream>
using namespace std;
class Employee
{
private:
    char *name = new char(25);
    int yearOfJoining;
    float salary;
    char *address = new char(50);

public:
    Employee()
    {
    }
    Employee(char *name, int yearOfJoining, float salary, char *address)
    {
        this->name = name;
        this->yearOfJoining = yearOfJoining;
        this->salary = salary;
        this->address = address;
    }
    void setName(char *name)
    {
        this->name = name;
    };
    char *getName()
    {
        return this->name;
    }

    void setYearOfJoining(int yearOfJoining)
    {
        this->yearOfJoining = yearOfJoining;
    };
    int getYearOfJoining()
    {
        return this->yearOfJoining;
    }

    void setSalary(float salary)
    {
        this->salary = salary;
    };
    float getSalary()
    {
        return this->salary;
    }

    void setAddress(char *address)
    {
        this->address = address;
    };
    char *getAddress()
    {
        return this->address;
    }
    int bonus()
    {
        if (this->salary < 5000)
        {
            return 0.3 * salary;
        }
        else if (this->salary >= 5000 && this->salary <= 10000)
        {
            return 0.2 * salary;
        }
        else
        {
            return 0.1 * salary;
        }
    }
    void display()
    {
        cout << this->name << " has been working since "
             << this->yearOfJoining << " with a " << this->salary << " PKR. Address of "
             << this->name << " is " << this->address << ". " << this->name << " has recieved a bonus of "
             << this->bonus() << " PKR." << endl;
    }
};
int main()
{
    char *name1 = new char(25);
    char *name2 = new char(25);
    int yearOfJoining;
    float salary;
    char *address1 = new char(50);
    char *address2 = new char(50);

    cout << "\nEmployee 1 details" << endl;
    cout << "\nEnter your name: ";
    cin >> name1;
    cout << "\nEnter your year of joining: \n";
    cin >> yearOfJoining;

    cout << "\nEnter your salary: \n";
    cin >> salary;

    cout << "\nEnter your address: \n";
    cin >> address1;

    Employee emp1 = Employee(name1, yearOfJoining, salary, address1);

    cout << "\nEmployee 2 details" << endl;
    cout << "\nEnter your name: ";
    cin >> name2;

    cout << "\nEnter your year of joining: \n";
    cin >> yearOfJoining;

    cout << "\nEnter your salary: \n";
    cin >> salary;

    cout << "\nEnter your address: \n";
    cin >> address2;

    Employee emp2 = Employee(name2, yearOfJoining, salary, address2);

    emp1.display();
    emp2.display();
    return 0;
}