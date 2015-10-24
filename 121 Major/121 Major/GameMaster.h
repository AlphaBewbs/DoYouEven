/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
//This is our mediator
#ifndef GAMEMASTER_H
#define GAMEMASTER_H
#include "Unit.h"

class GameMaster
{
	protected:
		string state;
	public:
		virtual ~GameMaster(){};

		virtual string state() = 0;
		virtual void setState(string state) = 0;
		string state();
		void setState(string);

		void attach(Unit *);
		void detach(Unit *);
		void notify();
};

#endif
