#pragma once
#include <iostream>
#include "Wild.h"
using namespace std;
class Rhino : public Wild
{
public:
	Rhino();
	~Rhino();
	void SetName(string name);
	string GetName();
	void SetType(string type);
	string GetType();
	void SetFeed(string feed);
	string GetFeed();
	void SetSpecies(string species);
	string GetSpecies();
	void SetGender(string species);
	string GetGender();
	void SetAge(int age);
	int GetAge();

protected:

};
