#include <iostream>
#include <string.h>
using namespace std;
class Account
{
private:
    string name;
    int acc_num;
    string acc_type;
    int balance;

public:
    Account(string acc_title, int acc_numb, string acc_Type, int balance)
    {
        name = acc_title;
        acc_num = acc_numb;
        acc_type = acc_Type;
        balance = balance;
    }
    void withdraw(int ammo)
    {
        cout << "Amount Details: " << endl;
        cout << name << endl;
        cout << acc_num << endl;
        cout << acc_type << endl;
        cout << "You've successfully withdraw the ammount: " << ammo - balance << endl;
    }
    void deposit(int ammount)
    {
        cout << "Amount Details: " << endl;
        cout << name << endl;
        cout << acc_num << endl;
        cout << acc_type << endl;

        cout << "You've successfully deposit the ammount: " << ammount + balance << endl;
    }
};

int main(int argc, char const *argv[])
{
    Account acc("David", 2002, "Current", 5000);
    acc.deposit(600);
    return 0;
}
