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
	//cout << "Creating -- " << getDescription();
}

/*string Piercing::getDescription() const
{
	stringstream ss;
	ss << "Unit # " << id << ": ";
	ss << subClass << " " << skill << ", ";
	ss << "Health: " << health;
	ss << "Damage: " << damage;
	return ss.str();
}/*

/*string Piercing::getDescription() const
{
	return Unit::getDescription();
}*/

//Prototype
Piercing* Piercing::clone()
{
	cout << "Cloning -- " << getDescription();
	return new Piercing(*this);
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