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
#include "Environment.h"

using namespace std;

class Magic : public Unit
{
	private:
		//Observer
		string state;	

	public:
		Magic(int, int); 	//Health, damage
			
		virtual string getUnit();
		virtual string getSubClass();
		virtual string getSkill();
		void attack(Unit*);

		//Prototype
		virtual Magic* clone(); 

		//Observer
		void update();

		//Mediator
		virtual string event();
		virtual void act();
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