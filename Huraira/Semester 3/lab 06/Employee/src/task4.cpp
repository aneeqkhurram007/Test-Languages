#include "Employee.h"

int main()
{
	Date date1(2, 3, 2005);
	Employee emp1("John", "L1s20bsse001", date1);
	emp1.display();

	Date date2(1, 5, 2015);
	Employee emp2("Dave", "L1s20bsse002", date2);
	emp2.display();

	Date date3(4, 3, 2010);
	Employee emp3("Max", "L1s20bsse003", date3);
	emp3.display();
}