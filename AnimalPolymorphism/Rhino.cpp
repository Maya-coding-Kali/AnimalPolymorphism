#pragma once
#include <iostream>
#include "Rhino.h"
using namespace std;
Rhino::Rhino()
{
	name = "";
	type = "";
	feed = "";
}
Rhino::~Rhino()
{

}
void Rhino::SetName(string name)
{
	this->name = name;
}
string Rhino::GetName()
{
	return name;
}
void Rhino::SetType(string type)
{
	this->type = type;
}
string Rhino::GetType()
{
	return type;
}
void Rhino::SetFeed(string feed)
{
	this->feed = feed;
}
string Rhino::GetFeed()
{
	return feed;
}
void Rhino::SetSpecies(string species)
{
	this->species = species;
}
string Rhino::GetSpecies()
{
	return species;
}
void Rhino::SetGender(string Gender)
{
	this->gender = Gender;
}
string Rhino::GetGender()
{
	return gender;
}
void Rhino::SetAge(int age)
{
	this->age = age;
}
int Rhino::GetAge()
{
	return age;
}