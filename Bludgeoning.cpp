/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#include "Bludgeoning.h"
#include <sstream>

using namespace std;

Bludgeoning::Bludgeoning(int _health, int _damage) : Unit(_health, _damage)
{
	skill = "Bludgeoning";
	state = "";
	cout << "Creating -- " <<  getDescription();
}

string Bludgeoning::getUnit()
{
	return unit;
}

string Bludgeoning::getSkill()
{
	return skill;
}

string Bludgeoning::getSubClass()
{
	return subClass;
}

void Bludgeoning::attack(Unit* enemy)
{
	if (enemy->getSkill() == "Piercing")
		enemy->takeDamage(damage + 3);
	else
		enemy->takeDamage(damage);
}

//Prototype
Bludgeoning* Bludgeoning::clone()
{
	cout << "Cloning -- " << getDescription();
	return new Bludgeoning(*this);
}

//Observer
void Bludgeoning::update()
{
	state = subject->state();
	if(state == "")
	{
		cout << "\tThe " << subClass << " is doing doing nothing..." << endl;
	}
	else if(state == "Fighting")
	{
		cout << "\tThe " << subClass << " is fighting brutaly!" << endl;	
	}
}

//Mediator
string Bludgeoning::event()
{
	/*
	return sure;
	EXAMPLE CODE
	*/
}

void Bludgeoning::act()
{
	/*
	cout << "\tA brave soldier attacks." << endl;
	EXAMPLE CODE
	*/
}