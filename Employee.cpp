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
