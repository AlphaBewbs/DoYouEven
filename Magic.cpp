/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

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

void Magic::attack(Unit* enemy)
{
	if (enemy->getSkill() == "Bludgeoning" )
		enemy->takeDamage(damage + 3);
	else
		enemy->takeDamage(damage);
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
	else if(state == "Fighting")
	{
		cout << "\tThe " << subClass << " is fighting with Magic!" << endl;	
	}
}
