#include "car.h"

int main()
{

	car car1;
	car car2;
	car1 = car("civic", 2001);
	car2 = car(car1);
	car1.display();
	car2.display();
	return 0;
}