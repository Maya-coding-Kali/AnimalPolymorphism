#include "Wild.h"

Wild::Wild()
{

}
Wild::~Wild()
{

}
void Wild::SetName(string name)
{
	this->name = name;
}
string Wild::GetName()
{
	return name;
}
void Wild::SetType(string type)
{
	this->type = type;
}
string Wild::GetType()
{
	return type;
}
void Wild::SetFeed(string feed)
{
	this->feed = feed;
}
string Wild::GetFeed()
{
	return feed;
}
void Wild::SetSpecies(string species)
{
	this->species = species;
}
string Wild::GetSpecies()
{
	return species;
}