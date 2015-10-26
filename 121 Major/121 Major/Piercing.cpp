/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#include "Piercing.h"
#include <sstream>

using namespace std;

Piercing::Piercing(int _health, int _damage) :Unit(_health, _damage)
{
	skill = "Piercing";
	state = "";
	cout << "Creating -- " <<  getDescription();
}

string Piercing::getUnit()
{
	return unit;
}

string Piercing::getSkill()
{
	return skill;
}

string Piercing::getSubClass()
{
	return subClass;
}

//@CHANGED
int Piercing::attack(Unit* enemy)
{
	if (enemy->getSkill() == "Magic")
		return enemy->takeDamage(damage + 3);
	else
		return enemy->takeDamage(damage);
}

//Prototype
Piercing* Piercing::clone()
{
	cout << "Cloning -- " << getDescription();
	return new Piercing(*this);
}

//Observer
void Piercing::update()
{
	if(state == "")
	{
		cout << "\tThe " << subClass << " is doing doing nothing..." << endl;
	}
	else if (state == "Computer")
	{
		cout << "It is the computer's turn..." << endl;
	}
	else if (state == "User")
	{
		cout << "It is your turn..." << endl;
	}
}

//Mediator
string Piercing::event()
{
	/*
	return sure;
	EXAMPLE CODE
	*/
	return "whatevs";
}

void Piercing::act()
{
	/*
	cout << "\tA brave soldier attacks." << endl;
	EXAMPLE CODE
	*/
}
