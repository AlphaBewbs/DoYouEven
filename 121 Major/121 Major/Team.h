/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

// Name: Ritesh Dolabh
Student Number: 15075754

********************************************/
#ifndef TEAM_H
#define TEAM_H

#include "GameMaster.h"
#include <vector>

//OBSERVER

class Team
{
	protected:

		vector<Unit*> players;
		vector<Unit*> monsters;

	public:

		Team(inputGameMaster : GameMaster *)
		Team()
		void initUnits();
		void update();
		void attack();
		void turn();
		void takeDamage(int damage);
		void addUnit(Unit * inputUnit);
		Unit * getUnitAt(int index);
		void setGameMaster(GameMaster *);
		int getSize();

}

#endif
