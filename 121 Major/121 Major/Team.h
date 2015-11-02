/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Dolabh
Student Number: 15075754

********************************************/
/**
*		@file Team.h
*		@class Team
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This class provides an abstraction for the Teams
*
*		@section Description
*		This class is the abstraction for the Bridge design pattern and the Observer.
*
*/
#ifndef TEAM_H
#define TEAM_H

#include "Master.h"
#include <vector>

//OBSERVER

class Team
{
	protected:
		/**
		*	This variable is a pointer to a Master object
		**/
		Master* master;

		/**
		*	This variable is a vector of Units.
		* @param Unit* is the unit added to the team.
		**/
		vector<Unit*> units;

	public:
		/**
		*	This is the default constructor fro the team class.
		**/
		Team() {};

		/**
		*	This is the overloaded constructor for the team class.
		* @ param Master* is the master class that is linked to the teams.
		**/
		Team(Master*);

		/**
		*	This functiion initialises all the Units in the class.
		**/
		virtual void initUnits() = 0;

		/**
		*	this function notifies all other units of an action that hasbeen taken.
		**/
		virtual void notify() = 0;

		/**
		*	this function provides the implementation for deciding whose turn it is.
		**/
		virtual void turn() = 0;

		/**
		*	This function provides the implementation of attacking another team.
		**/
		virtual void attack() = 0;

		/**
		*	This function adds a unit to the team.
		* @param Unit* is the unit to be added to the team.
		**/
		virtual void addUnit(Unit*);

		/**
		*	This function invokes a unit to take damamge.
		* @param Unit* is the unit that the damage is inflicted on.
		**/
		virtual void takeDamage(Unit *);

		/**
		*	This function returns a unit pointer at the position given.
		* @param int is the position that we want the unit from.
		**/
		virtual Unit* getUnitAt(int);

		/**
		*	This function returns the size of the team.
		**/
		virtual int getSize();

		/**
		*	This function allows us to change the master of the Team.
		**/
		virtual void setMaster(Master*);

};

#endif
