#include "Car.h"

int main()
{
	Car Honda("civic", 2002);
	Honda.display();

	Car Toyota("yaris", 2020);
	Toyota.display();

	Car Audi("A8", 2018);
	Audi.display();

	Car Audi2 = Audi;
	Audi2.display();
	Audi2.setName("Q8");

	Audi.display();
}