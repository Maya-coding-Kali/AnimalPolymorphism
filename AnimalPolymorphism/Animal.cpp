#include "Animal.h"

void Animal::SetName(string name)
{
	this->name = name;
}
string Animal::GetName()
{
	return name;
}
void Animal::SetType(string type)
{
	this->type = type;
}
string Animal::GetType()
{
	return type;
}
void Animal::SetFeed(string feed)
{
	this->feed = feed;
}
string Animal::GetFeed()
{
	return feed;
}
void Animal::SetSpecies(string species)
{
	this->species = species;
}
string Animal::GetSpecies()
{
	return species;
}
void Animal::SetGender(string gender)
{
	this->gender = gender;
}
string Animal::GetGender()
{
	return gender;
}
void Animal::SetAge(int age)
{
	this->age = age;
}
int Animal::GetAge()
{
	return age;
}