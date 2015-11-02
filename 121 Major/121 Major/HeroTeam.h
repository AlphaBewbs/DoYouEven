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
*		@file HeroTeam.h
*		@class HeroTeam
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This class allows us to keep track of all the elements of the hero team.
*
*		@section Description
*		This class is the Concrete observer and the refined abstraction in the
*		respective design patterns.
*
*/
#ifndef HEROTEAM_H
#define HEROTEAM_H

#include "Team.h"
#include "UnitFactory.h"

//CONCRETE OBSERVER

class HeroTeam : public Team
{
	public:
		/**
		*	This is the constructor for the HeroTeam
		**/
		HeroTeam() {};

		/**
		*	This is the overloaded constructor passing a pointer to the master class.
		*	@param Master* is the Masterclass that we want to link to the HeroTeam
		**/
		HeroTeam(Master *);

		/**
		*	This functiion initialises all the Units in the class.
		**/
		void initUnits();

		/**
		*	this function provides the implementation for deciding whose turn it is.
		**/
		void turn();

		/**
		*	this function notifies all other units of an action that hasbeen taken.
		**/
		void notify();

		/**
		*	This function provides the implementation of attacking another team.
		**/
		void attack();
};

#endif
