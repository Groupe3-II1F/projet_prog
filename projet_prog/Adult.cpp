#include "Adult.h"

Adult::Adult(string name, string surname) :Person(name, surname)
{

}

Adult::~Adult()
{
}
void Adult::addVitality()
{
	if (vitality + infection_rate / 2 >= 100)
		vitality = 100;
	else
		vitality += infection_rate / 2;
}


void Adult::subVitality()
{
	if (vitality - infection_rate <= 0)
		vitality = 0;
	else
		vitality -= infection_rate;
}