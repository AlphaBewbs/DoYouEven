/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Dolabh
Student Number: 15075754

********************************************/
#ifndef TEAM_H
#define TEAM_H

#include "Master.h"
#include <vector>

//OBSERVER

class Team
{
	protected:
		Master* master;
		vector<Unit*> units;

	public:
		Team() {};
		Team(Master*);

		virtual void initUnits() = 0;
		virtual void notify() = 0;
		virtual void turn() = 0;
		virtual void attack() = 0;

		virtual void addUnit(Unit*);
		virtual void takeDamage(Unit *);

		virtual Unit* getUnitAt(int);
		virtual int getSize();
		virtual void setMaster(Master*);

};

#endif
