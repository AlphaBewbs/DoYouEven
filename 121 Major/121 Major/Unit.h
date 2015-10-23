/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#ifndef UNIT_H
#define UNIT_H

#include <string>
#include <iostream>

using namespace std;

class Unit
{
	protected:
		int id;
		int health;
		int damage;
		string subClass;	//Either mage, soldier or thief
		string skill;	//Either magic, bludgeoning or piercing
		string unit;	//Either a player/hero or monster/mob

		//Observer-Mediator
		GameMaster* gameMaster;


	public:
		Unit(int, int);

		virtual string getDescription() const;

		virtual string getUnit() = 0;	//To return just the type of unit
		virtual string getSubClass() = 0;	//To return just the skill
		virtual string getSkill() = 0;	//To return just the type

		virtual void attack(Unit*) = 0;
		virtual void takeDamage(int);
		/*
		magic deals more damage to bludgeoning
		bludgeoning deal more damage to piercing
		piercing deals more damage to magic
		*/

		//Protoype
		virtual Unit* clone() = 0;

		//Observer-Mediator
		virtual registerGameMaster(GameMaster*)
};
//static int count = 0;

#endif
