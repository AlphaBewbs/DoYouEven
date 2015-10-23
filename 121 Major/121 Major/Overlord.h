/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#ifndef OVERLORD_H
#define OVERLORD_H

#include "GameMaster.h"
#include <vector>

class Overlord : public GameMaster
{
	private:
		string state;

		vector<Unit*> players;
		vector<Unit*> monsters;

	public:
		void attach(Unit *);
		void detach(Unit *);
		void notify();

		string state();
		void setState(string);
}

#endif
