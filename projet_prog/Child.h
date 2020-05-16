#include "Person.h"
#ifndef CHILD_H
#define CHILD_H



class Child : public Person
{
private:
	const int infection_rate = 15;
public:
	Child(string name, string surname);
	virtual void addVitality();
	virtual void subVitality();
	virtual ~Child();

};

#endif