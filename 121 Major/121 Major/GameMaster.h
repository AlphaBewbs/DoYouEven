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

class Unit;
class Team;

using namespace std;

//@NOTE added this fior easier functions
struct Point
{
	int x;
	int y;
	int getX() { return x; };
	int getY() { return y; };
};

class GameMaster
{
	protected:
		int turn;
		Team* heros;
		Team* monsters;

	public:
		GameMaster() {};


		virtual	void attachUnit(Unit*) = 0;
		virtual void detachUnit(Unit*)  = 0;
		virtual bool moveUnit(Unit*, char) = 0;

		//@CHANGED This getUnitAt function is removed
		//Unit* getUnitAt(int);

		virtual void printMap() = 0;

		virtual void notify(Unit*) = 0;
		virtual Point locateUnit(Unit*) = 0;

		//@CHANGED This getUnitAt function is removed
		//virtual vector<int> requestFreeSpace() = 0;
		//virtual void removeDestroyedUnits() = 0;

		bool gameOver();
};

#endif
