#pragma once
#include <iostream>
using namespace std;
class Animal//this class is pure virtual  because we are using pure vitual functions and now it cannot be instantiated
{
public:
	virtual void SetName(string name) = 0;
	virtual string GetName() = 0;
	virtual void SetType(string type) = 0;
	virtual string GetType() = 0;
	virtual void SetFeed(string feed) = 0;
	virtual string GetFeed() = 0;
	virtual void SetSpecies(string species) = 0;
	virtual string GetSpecies() = 0;
	virtual void SetGender(string species) = 0;
	virtual string GetGender() = 0;
	virtual void SetAge(int age) = 0;
	virtual int GetAge() = 0;
protected://its scope is proted so i can access this in my child classes
	string name;
	string type;
	string feed;
	string species;
	string gender;
	int age;
};
