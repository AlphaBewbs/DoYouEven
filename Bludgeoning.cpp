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
	//cout << "Creating -- " << getDescription();
}

/*string Bludgeoning::getDescription() const
{
	stringstream ss;
	ss << "Unit # " << id << ": ";
	ss << subClass << " " << skill << ", ";
	ss << "Health: " << health;
	ss << "Damage: " << damage;
	return ss.str();
}*/

//Prototype
Bludgeoning* Bludgeoning::clone()
{
	cout << "Cloning -- " << getDescription();
	return new Bludgeoning(*this);
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