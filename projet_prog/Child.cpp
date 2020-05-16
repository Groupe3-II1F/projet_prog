#include "Child.h"

Child::Child(string name, string surname) :Person(name, surname)
{

}

Child::~Child()
{
}

void Child::addVitality()
{
	if (vitality + infection_rate / 2 >= 100)
		vitality = 100;
	else
		vitality += infection_rate / 2;
}


void Child::subVitality()
{
	if (vitality - infection_rate <= 0)
		vitality = 0;
	else
		vitality -= infection_rate;
}