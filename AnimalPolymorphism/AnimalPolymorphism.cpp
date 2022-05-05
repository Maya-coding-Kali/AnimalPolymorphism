// AnimalPolymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Rhino.h"
int main()
{
	Dog D;
	D.SetName("Molly");
	D.SetType("Chocolate Lab");
	D.SetFeed("Chow");
	D.SetSpecies("Dog");
	std::cout << "This is our " << D.GetSpecies() << " Her name is " << D.GetName() << " she is a" << D.GetType() << " And she loves to eat " << D.GetFeed() <<endl;
	Rhino R;
	R.SetName("Jerry");
	R.SetType("Wild - White");
	R.SetFeed("Grass");
	R.SetSpecies("Rhino");
	std::cout << "This is our " << R.GetSpecies() << " His name is " << R.GetName() << " He is " << R.GetType() << " And he loves to eat " << R.GetFeed() << endl << endl;

	Animal* Kingdom[] = { &D, &R };
	for (int i = 0; i < 2; i++)
	{
		std::cout << "This is our " << Kingdom[i]->GetSpecies() << " whos name is " << Kingdom[i]->GetName() << " and is a " << Kingdom[i]->GetType() << " And  loves to eat " << Kingdom[i]->GetFeed() << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
