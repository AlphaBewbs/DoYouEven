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

void Piercing::attack(Unit* enemy)
{
	if (enemy->getSkill() == "Magic")
		enemy->takeDamage(damage + 3);
	else
		enemy->takeDamage(damage);
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
	state = subject->state();
	if(state == "")
	{
		cout << "\tThe " << subClass << " is doing doing nothing..." << endl;
	}
	else if(state == "Fighting")
	{
		cout << "\tThe " << subClass << " is fighting sneakily!" << endl;	
	}
}
