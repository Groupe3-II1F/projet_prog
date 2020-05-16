#ifndef ADULT_H
#define ADULT_H

#include "Person.h"

class Adult : public Person
{
private:
	const int infection_rate = 25;
public:
	Adult(string name, string surname);
	virtual void addVitality();
	virtual void subVitality();
	~Adult();
protected:
};

#endif