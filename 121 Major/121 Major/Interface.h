/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#ifndef INTERFACE_H
#define INTERFACE_H

#include "UnitFactory.h"

class Interface
{
	private:
		PlayerFactory playerFactory;
		MonsterFactory monsterFactory;
		Unit** units;
	public:
		Interface();
		~Interface();

		void chooseHero();
		void chooseCompanion();
};

#endif