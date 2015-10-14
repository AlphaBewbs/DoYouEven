/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#ifndef ATTACKPARTY_H
#define ATTACKPARTY_H

#include "Party.h"
#include <vector>

//Concrete Mediator//

class Attackparty : public Party
{

	private:
		vector<Unit*> unitParty;

	public:
		void notify(Unit *);
		void add(Unit *);
};

#endif