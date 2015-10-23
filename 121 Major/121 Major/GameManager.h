/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Mediator.h"
#include <vector>

//Concrete Mediator//

class GameManager : public Mediator
{

	private:
		vector<Unit*> unitParty;

	public:
		void notify(Unit *);
		void add(Unit *);
};

#endif
