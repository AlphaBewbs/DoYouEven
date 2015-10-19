/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#ifndef GAMEMASTER_H
#define GAMEMASTER_H

#include "UnitFactory.h"

class GameMaster
{
	private:
		PlayerFactory playerFactory;
		MonsterFactory monsterFactory;
		Unit** units;
		Unit* hero;

	public:
		GameMaster();
		~GameMaster();

		void startGame();

		void chooseHero();
		void chooseCompanion();
};

#endif