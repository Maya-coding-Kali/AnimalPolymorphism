#pragma once
#include <iostream>
#include "Dog.h"
using namespace std;
Dog::Dog()
{
	name = "";
	type = "";
	feed = "";
}
Dog::~Dog()
{

}
void Dog::SetName(string name)
{
	this->name = name;
}
string Dog::GetName()
{
	return name;
}
void Dog::SetType(string type)
{
	this->type = type;
}
string Dog::GetType()
{
	return type;
}
void Dog::SetFeed(string feed)
{
	this->feed = feed;
}
string Dog::GetFeed()
{
	return feed;
}
void Dog::SetSpecies(string species)
{
	this->species = species;
}
string Dog::GetSpecies()
{
	return species;
}
void Dog::SetGender(string Gender)
{
	this->gender = Gender;
}
string Dog::GetGender()
{
	return gender;
}
void Dog::SetAge(int age)
{
	this->age = age;
}
int Dog::GetAge()
{
	return age;
}