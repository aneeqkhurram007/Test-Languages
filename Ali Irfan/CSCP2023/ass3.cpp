#include <stdio.h>
#include "account.h"
using namespace std;
int main(int argc, char const *argv[])
{
    Account acc1(1000, "John", "FA888888");
    acc1.display();
    acc1.deposit(600);
    acc1.withdraw(50);
    acc1.display();
    return 0;
}
