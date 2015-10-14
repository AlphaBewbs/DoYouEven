/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#ifndef PIERCING_H
#define PIERCING_H

#include "Unit.h"
#include "Environment.h"

using namespace std;

class Piercing : public Unit
{
	private:
		//Observer
		string state;	

	public:
		Piercing(int, int); 	//Health, damage
			
		virtual string getUnit();
		virtual string getSubClass();
		virtual string getSkill();
		void attack(Unit*);

		//Prototype
		virtual Piercing* clone(); 
		//Observer
		void update();
};

class Thief : public Piercing
{
	public:
		Thief() : Piercing(60, 10) 
		{
			subClass = "Thief";
			unit = "Player";
		}

};

class Goblin : public Piercing
{
	public:
		Goblin() : Piercing(50, 12) 
		{
			subClass = "Goblin";
			unit = "Monster";
		}
};

#endif