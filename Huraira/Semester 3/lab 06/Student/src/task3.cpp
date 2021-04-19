#include "Student.h"

int main()
{
	ifstream file;
	char *name = new char[25]{'\0'};
	char *reg = new char[25]{'\0'};
	double cgpa;
	int day;
	int month;
	int year;
	file.open("Student.txt", ios::in);
	int number;
	file >> number;
	Student *std[number];

	for (int i = 0; i < number && !file.eof(); i++)
	{
		file >> name;
		file >> reg;
		file >> cgpa;
		file >> day;
		file >> month;
		file >> year;

		Date date(day, month, year);

		std[i] = new Student(name, reg, cgpa, date);
		std[i]->display();
	}
	file.close();
	return 0;
}