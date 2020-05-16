#ifndef ELDERY_H
#define ELDERY_H

#include "Person.h"

class Elderly : public Person
{
private:
	const int infection_rate = 45;
public:
	Elderly(string name, string surname);
	virtual void addVitality();
	virtual void subVitality();
	~Elderly();
};

#endif
