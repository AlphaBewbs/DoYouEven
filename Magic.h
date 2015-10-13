/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#ifndef MAGIC_H
#define MAGIC_H

#include "Unit.h"

using namespace std;

class Magic : public Unit
{
	public:
		Magic(int, int);	//Health, damage
		virtual Magic* clone();	//Prototype
		virtual string getUnit();
		virtual string getSubClass();
		virtual string getSkill();
		void attack(Unit*);
};

class Mage : public Magic
{
	public:
		Mage() :Magic(80, 5) 
		{
			subClass = "Mage";
			unit = "Player";
		} 
};

class Elemental : public Magic
{
	public:
		Elemental() :Magic(85, 4) 
		{
			subClass = "Elemental";
			unit = "Monster";
		}
};


#endif