#include "Manager.h"

void Manager::setBU(string b)
{
	bu = b;
}

string Manager::getBU()
{

	return bu;
}

Manager::Manager():Employee()
{
	setBU("Not set yet");
	//setID("not set yet");
	//setName("not set yet");
}

Manager::Manager(string n, string i, string bu):Employee(n,i)
{
	setBU(bu);
}
