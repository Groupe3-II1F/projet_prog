#pragma once
#include<string.h>
#include<iostream>
#ifndef PERSON_H
#define PERSON_H

using namespace std;
class Person
{
protected:
	int vitality = 100;
	string name;
	string surname;
public:
	Person();
	Person(string name = "", string surname = "");
	virtual void addVitality() = 0;
	virtual void subVitality() = 0;
	int getVitality();
	string getName();
	string getSurname();
	void setName(string name);
	void setSurname(string surname);
	virtual ~Person();

};

#endif
