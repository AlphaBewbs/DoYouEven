/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Dolabh
Student Number: 15075754

********************************************/
#ifndef HEROTEAM_H
#define HEROTEAM_H

#include "Team.h"
#include "UnitFactory.h"

//CONCRETE OBSERVER

class HeroTeam : public Team
{
	public:
		HeroTeam() {};
		HeroTeam(Master *);
		void initUnits();
		void turn();
		void notify();
		void attack();
};

#endif
