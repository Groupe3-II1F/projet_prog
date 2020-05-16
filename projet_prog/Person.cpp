#include "Person.h"
Person::Person()
{
	name = "";
	surname = "";
}
Person::Person(string name, string surname)
{
	this->name = name;
	this->surname = surname;
}
Person::~Person()
{

}


int Person::getVitality()
{
	return vitality;
}

string Person::getName()
{
	return name;
}

string Person::getSurname()
{
	return surname;
}

void Person::setName(string name)
{
	this->name = name;
}

void Person::setSurname(string surname)
{
	this->surname = surname;
}