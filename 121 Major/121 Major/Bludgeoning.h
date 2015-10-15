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
#include "Environment.h"

using namespace std;

class Bludgeoning : public Unit
{
	private:
		//Observer
		string state;	

	public:
		Bludgeoning(int, int); 	//Health, damage
			
		virtual string getUnit();
		virtual string getSubClass();
		virtual string getSkill();
		void attack(Unit*);

		//Prototype
		virtual Bludgeoning* clone(); 

		//Observer
		void update();

		//Mediator
		virtual string event();
		virtual void act();
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
