#pragma once
#include "string.h"
#include "iostream"
using namespace std;
class Employee
{
private: 
	string name;
	string id; 

public:
	// Constructors 
	Employee();
	Employee(string n, string id);
	// setters and getters

	void setName(string n);
	string getName();
	void setID(string id);
	string getID();

	// functions
	void printInfo();


};

