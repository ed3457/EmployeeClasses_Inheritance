#pragma once
#include "Employee.h"
class Manager:public Employee 
{
private: 
	string bu; 

public:

	void setBU(string b);
	string getBU();

	Manager();
	Manager(string n, string i, string bu);



};

