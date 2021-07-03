#include "Card.h"
#include "CheckingAccount.h"
int main()
{

    Card card(73066);
    CheckingAccount bank("HBL", "Lahore", 73066, 3.5);
    bank.display();
}