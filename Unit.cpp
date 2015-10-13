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
#include <sstream>

Unit::Unit(int _health, int _damage)
{
	health = _health;
	damage = _damage;
	// = ++count; 	//PRE INCREMENT
	//id = count++;
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

void Unit::takeDamage(int _damage)
{
	health -= _damage;

	if (health <= 0)
		cout << "Unit # " << id << " has died...";
}