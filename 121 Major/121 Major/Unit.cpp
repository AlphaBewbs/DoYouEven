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
#include "Subject.h"
#include "Party.h"
#include <sstream>

Unit::Unit(int _health, int _damage)
{
	health = _health;
	damage = _damage;

	// = ++count; 	//PRE INCREMENT
	//id = count++;

	party = NULL; //Mediator obj
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

//Observer
Unit::~Unit()
{
	if(subject != NULL)
		subject->detach(this);
}

void Unit::registerSubject(Subject * _subject)
{
	subject = subject;
}

//Mediator
void Unit::setSquad(Party* _party)
{
	party = _party;
}

void Unit::changed()
{
	party->notify(this);
}

void Unit::inspect()
{
	changed();
}
