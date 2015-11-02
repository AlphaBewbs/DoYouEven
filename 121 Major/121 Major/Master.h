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
*		@file Master.h
*		@class Master
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that keeps track of all the games functions and
*		acts as the Adapter, Concrete Mediator and Concrete subject.
*
*		@section Description
*		This class provides the basis on which the game is played.
*
*/

//@NOTE This is our concrete mediator
#ifndef MASTER_H
#define MASTER_H

#include "GameMaster.h"
#include "Map.h"

using namespace std;

class Master : public GameMaster
{
	private:
		/**
		*	This is a pointer to a map object.
		**/
		Map* map;

		/**
		*	This is a 2D dynamic array for holding all of the map elements.
		**/
  	Unit*** unitGrid;

	public:
		/**
		*	This is the default constructor for the Master.
		**/
		Master();

		/**
		*		The attachUnit function attaches units to the GameMaster.
		*		@param Unit* is the unit that is to be attached.
		**/
    virtual	void attachUnit(Unit*);

		/**
		*		This function detched a unit from the GameMaster.
		*		@param Unit* is the unit that is to be detached.
		**/
		virtual void detachUnit(Unit*);

		/**
		*		This is the function that allows for the movement of the hero.
		*		It is virtual and will be implemented in a concrete version of the class.
		**/
		virtual void moveHero();

		void attack(Unit*, Team*); //for COR action
		void attack(Unit*, Unit*); //for hero vs monster action

		/**
		*	This function allows us to add elements to the map.
		**/
		virtual void addToMap(Unit*);

		/**
		*	This function allows us to add a Unit to the MonsterTeam.
		*	@param Unit is the Unit to be added.
		**/
		void addMonsterTeam(Unit*);

		/**
		*	This function allows us to add a Unit to the PlayerTeam.
		*	@param Unit is the Unit to be added.
		**/
		void addPlayerTeam(Unit*);

		/**
		*	This function allows us to move the monsters on the map.
		**/
		void moveMonsters();

		/**
		*		This function notify's a unit of any changes.
		*		@param Unit* is the unit that is to be notified of the changes.
		**/
		virtual void notify(Unit*);

		/**
		*		This function allows us to locate a specific unit on the map.
		*		@param Unit* is the unit that we want to locate.
		**/
		virtual Point locateUnit(Unit*);

		/**
		*	This function removes all the destroyed units from the map.
		**/
		virtual void removeDestroyedUnits();

		/**
		*	This function prints the map.
		**/
		void print();

		/**
		*	This function checks if a unit can attack another unit.
		* @param Unit* is the Unit that wants to attack.
		**/
		Unit* canUnitAttack(Unit*);

		//@NOTE new for the gui
		/**
		*	This function returns the element in the map after given the coordinates.
		* @param int y is the Y-coordinate.
		* @param int x is the x-coordinate.
		**/
		char getSpace(int y, int x);

};

#endif
