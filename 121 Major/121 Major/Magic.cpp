/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754
uopupu
********************************************/
#include "Magic.h"
#include <sstream>

using namespace std;

Magic::Magic(int _health, int _damage):Unit(_health, _damage)
{
	skill = "Magic";
	state = "";
	cout << "Creating -- " <<  getDescription();
}

string Magic::getUnit()
{
	return unit;
}

string Magic::getSkill()
{
	return skill;
}

string Magic::getSubClass()
{
	return subClass;
}

int Magic::attack(Unit* enemy)
{
	if (enemy->getSkill() == "Bludgeoning" )
		return enemy->takeDamage(damage + 3);
	else
		return enemy->takeDamage(damage);
}

//Prototype
Magic* Magic::clone()
{
	cout << "Cloning -- " << getDescription();
	return new Magic(*this);
}

//Observer
void Magic::update()
{
	state = subject->state();
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
string Magic::event()
{
	/*
	return sure;
	EXAMPLE CODE
	*/
}

void Magic::act()
{
	/*
	cout << "\tA brave soldier attacks." << endl;
	EXAMPLE CODE
	*/
}
