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

class Team;

using namespace std;

class GameMaster
{
	protected:
		int turn;
		Team* team;

	public:
		GameMaster();

		void playGame();

		virtual	void attachTeam(Team* inputTeam) = 0;
		virtual void detachTeam(Team* inputTeam) = 0;
		virtual bool moveUnit(Unit* inputUnit, string direction) = 0;
		void attack(Unit* attackingUnit, Unit* defendingUnit) = 0;

		int getNumberTeams();
		Team* getTeamAt(int index);
		virtual void printMap() = 0;
		virtual void addToMap(Unit* inputUnit, int x, int y) = 0;
		virtual vector<int> locateUnit(Unit* inputUnit) = 0;

		
		virtual void notify(Team*) = 0;
		virtual Unit* locateUnit(int row, int col) = 0;
		virtual vector<int> requestFreeSpace() = 0;
		virtual void removeDestroyedUnits() = 0;

		bool gameOver();

};

#endif
