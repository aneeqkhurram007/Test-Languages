#include <iostream>
using namespace std;
class employee
{
private:
    char *name;
    int joiningyear;
    float salary;
    char *address;

public:
    employee(char *nm = new char(25), int jy = 0, float s = 0.0, char *a = new char(40)) //parameterized;
    {
        setName(nm);
        setjoiningyear(jy);
        setSalary(s);
        setaddress(a);
    }
    //Setters and Getters

    void setName(char *nm)
    {
        name = nm;
    }
    void setjoiningyear(int jy)
    {
        if (jy > 0)

        {
            joiningyear = jy;
        }
    }
    void setSalary(float s)
    {

        salary = s;
    }

    void setaddress(char *a)
    {
        address = a;
    }
    char *getName()
    {
        return name;
    }

    int getjoiningyear()
    {
        return joiningyear;
    }

    float getSalary()
    {
        return salary;
    }

    char *getaddress()
    {
        return address;
    }

    void display()
    {
        cout << name << " has been working since " << joiningyear << " with the salaray of " << salary << " PkR."
             << " Address of " << name << " is " << address << ". " << name << " has received the bonus of " << calculatebonus() << endl;
    }
    int calculatebonus()
    {
        int bonus;
        if (salary < 5000)
        {
            bonus = salary * 0.3;
        }
        else if (salary < 5000)
        {
            bonus = salary * 0.2;
        }
        else
        {
            bonus = salary * 0.1;
        }
        return bonus;
    }
};

int main()
{

    char *address = new char(50);
    char *name = new char(25);
    int joiningyear;
    float salaray;
    cout << "enter the name of the employee: \n";
    cin.getline(name, 25);
    cout << "enter the joining year: \n";
    cin >> joiningyear;
    cout << "enter the salaray: \n";
    cin >> salaray;
    cout << "enter the address of the employee: \n";
    fflush(stdin);
    cin.getline(address, 50);

    employee s1 = employee(name, joiningyear, salaray, address);
    s1.display();
}