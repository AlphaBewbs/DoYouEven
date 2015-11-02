/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
/**
*		@file GameMaster.h
*		@class GameMaster
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that keeps track of all the games functions and
*		acts as the mediator and subject for observer.
*
*		@section Description
*		This class provides the basis on which the game is played.
*
*/
//This is our mediator
#ifndef GAMEMASTER_H
#define GAMEMASTER_H

class Unit;
class Team;

using namespace std;

//@NOTE added this fior easier functions
struct Point
{
	/**
	*	This variable stores the x coordinate
	**/
	int x;

	/**
	*	This variable stores the y coordinate
	**/
	int y;

	/**
	*	This function retrns the x-coordinate.
	**/
	int getX() { return x; };

	/**
	*	This function returns the Y-coordinate.
	**/
	int getY() { return y; };
};

class GameMaster
{
	protected:
		/**
		*		This memeber variable keeps an int of whose turn it is to play.
		**/
		int turn;
		/**
		*		This member variable is a pointer to a team of hero's/players
		**/
		Team* heros;
		/**
		*		This member variable is a pointer to a team of monsters.
		**/
		Team* monsters;

	public:
		/**
		*		This is the constructor for the GameMaster class.
		**/
		GameMaster() {};

		/**
		*		The attachUnit function attaches units to the GameMaster.
		*		@param Unit* is the unit that is to be attached.
		**/
		virtual	void attachUnit(Unit*) = 0;

		/**
		*		This function detched a unit from the GameMaster.
		*		@param Unit* is the unit that is to be detached.
		**/
		virtual void detachUnit(Unit*)  = 0;
		/**
		*		This is the function that allows for the movement of the hero.
		*		It is virtual and will be implemented in a concrete version of the class.
		**/
		virtual void moveHero() = 0;

		//@CHANGED This getUnitAt function is removed
		//Unit* getUnitAt(int);

		//virtual void printMap() = 0;
		/**
		*		This function notify's a unit of any changes.
		*		@param Unit* is the unit that is to be notified of the changes.
		**/
		virtual void notify(Unit*) = 0;

		/**
		*		This function allows us to locate a specific unit on the map.
		*		@param Unit* is the unit that we want to locate.
		**/
		virtual Point locateUnit(Unit*) = 0;

		//@CHANGED This getUnitAt function is removed
		//virtual vector<int> requestFreeSpace() = 0;
		//virtual void removeDestroyedUnits() = 0;

		/**
		*		This function returns a boolean value if the game is over.
		**/
		bool gameOver();
};

#endif
