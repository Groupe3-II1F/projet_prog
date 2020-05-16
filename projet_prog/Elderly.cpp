#include "Elderly.h"

Elderly::Elderly(string name, string surname) :Person(name, surname)
{
}

Elderly::~Elderly()
{
}

void Elderly::addVitality()
{
	if (vitality + infection_rate / 2 >= 100)
		vitality = 100;
	else
		vitality += infection_rate / 2;
}


void Elderly::subVitality()
{
	if (vitality - infection_rate <= 0)
		vitality = 0;
	else
		vitality -= infection_rate;
}