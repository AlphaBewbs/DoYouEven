/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#ifndef GAMEINTERFACE_H
#define GAMEINTERFACE_H

#include "UnitFactory.h"

class GameInterface
{
	private:
		PlayerFactory playerFactory;
		MonsterFactory monsterFactory;


	public:
		GameInterface();
		~GameInterface();

		void startGame();

		void move();
		void createUnits();


		void chooseHero();
		void chooseCompanion();
};

#endif
