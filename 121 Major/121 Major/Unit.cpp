/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#include "Unit.h"
#include "GameMaster.h"
#include <sstream>

Unit::Unit(int _health, int _damage)
{
	health = _health;
	damage = _damage;

	gameMaster = NULL;
}

string Unit::getDescription() const
{
	stringstream ss;
	ss << "Unit # " << id << ": ";
	ss << skill << " " << subClass << ", ";
	ss << "Health: " << health;
	ss << ", Damage: " << damage;
	ss << endl;
	return ss.str();
}

int Unit::takeDamage(int _damage)
{
	health -= _damage;

	if (health <= 0)
	{
		const int CARRYOVER = health * -1;
		cout << "Unit # " << id << " has died..." << endl;
		health = 0;
		return CARRYOVER;
	}
	else
	{
		cout << "Unit # " << id << " took " << _damage << " points of damage" << endl;
		return 0;
	}
}

//Observer-Mediator
Unit::~Unit()
{
	if(gameMaster != NULL)
		gameMaster->detach(this);
}

void Unit::registerGameMaster(GameMaster * _gameMaster)
{
	gameMaster = _gameMaster;
}
