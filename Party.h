/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#ifndef PARTY_H
#define PARTY_H

#include "Unit.h"

//Mediator//

class Party
{
	public:
		virtual ~Party(){}
		virtual void notify(Unit *) = 0;
		virtual void add(Unit *) = 0;
};

#endif