#include "Pet.h"

Pet::Pet()
{
	name = "";
	type = "";
	feed = "";
}
Pet::~Pet()
{

}
void Pet::SetName(string name)
{
	this->name = name;
}
string Pet::GetName()
{
	return name;
}
void Pet::SetType(string type)
{
	this->type = type;
}
string Pet::GetType()
{
	return type;
}
void Pet::SetFeed(string feed)
{
	this->feed = feed;
}
string Pet::GetFeed()
{
	return feed;
}
void Pet::SetSpecies(string species)
{
	this->species = species;
}
string Pet::GetSpecies()
{
	return species;
}