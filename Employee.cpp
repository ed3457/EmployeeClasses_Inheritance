#include "Employee.h"

Employee::Employee()
{
	setID("not set yet");
	setName("Not assigned yet");

}

Employee::Employee(string n, string i)
{
	setID(i);
	setName(n);

}

void Employee::setID(string i)
{
	id = i;

}

string Employee::getID()
{
	return id;

}

void Employee::setName(string n)
{
	name = n;
}

string Employee::getName()
{
	return name;
}

void Employee::printInfo()
{
	cout << "Employee ID:" << getID() << endl;
	cout << "Employee Name:" << getName() << endl;

}
