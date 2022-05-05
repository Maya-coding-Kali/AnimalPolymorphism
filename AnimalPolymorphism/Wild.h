#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;
class Wild : public Animal
{
public:
	Wild();
	~Wild();
	virtual void SetName(string name);
	virtual string GetName();
	virtual void SetType(string type);
	virtual string GetType();
	virtual void SetFeed(string feed);
	virtual string GetFeed();
	virtual void SetSpecies(string species);
	virtual string GetSpecies();
protected:

};
