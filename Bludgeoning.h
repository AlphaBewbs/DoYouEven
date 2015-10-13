/******************************************** 
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#ifndef BLUDGEONING_H
#define BLUDGEONING_H

#include "Unit.h"

using namespace std;

class Bludgeoning : public Unit
{
public:
	Bludgeoning(int, int); //Health, damage
	virtual Bludgeoning* clone(); 	//Prototype
	//virtual string getDescription() const;
	virtual string getUnit();
	virtual string getSubClass();
	virtual string getSkill();
	void attack(Unit*);
};

class Soldier : public Bludgeoning
{
public:
	Soldier() :Bludgeoning(100, 8) 
	{
		subClass = "Soldier";
		unit = "Player";
	}
};

class Ogre : public Bludgeoning
{
public:
	Ogre() :Bludgeoning(120, 5) 
	{
		subClass = "Ogre";
		unit = "Monster";
	}
};

#endif
