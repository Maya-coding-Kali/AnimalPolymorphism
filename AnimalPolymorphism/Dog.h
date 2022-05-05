#pragma once
#include <iostream>
#include "Pet.h"
using namespace std;
class Dog : public Pet
{
public:
	Dog();
	~Dog();
	void SetName(string name) override;
	string GetName()override;
	void SetType(string type)override;
	string GetType()override;
	void SetFeed(string feed)override;
	string GetFeed()override;
	void SetSpecies(string species)override;
	string GetSpecies()override;
	void SetGender(string species) ;
	 string GetGender();
	 void SetAge(int age);
	 int GetAge();
};