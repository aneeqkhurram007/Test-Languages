#include "Bike.h"

int main()
{
	Bike Bike1("CG125", "Honda", "Black", 2006);
	Bike Bike2 = Bike1;

	Bike2.display();
	Bike1.setColor("Red");
	Bike2.display();
	Bike1.display();
}