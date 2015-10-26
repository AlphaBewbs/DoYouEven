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
*		@file Magic.h
*		@class Piercing
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that stores units of the Piercing type.
*
*		@section Description
*		This class provides access to the attribules of all the Piercing units
*		and access to clone them.
*
*/
#ifndef PIERCING_H
#define PIERCING_H

#include "Unit.h"

using namespace std;

class Piercing : public Unit
{
	private:
		//Observer
		string state;

	public:
		/**
		*		The constructor creates an instance of the class.
		*		@param int passes the health of the piercing object.
		*		@param int passes the damage that the Piercing object causes.
		*/
		Piercing(int, int); 	//Health, damage

		/**
		*		The function returns the type of unit that it is.
		*/
		virtual string getUnit();

		/**
		*		The function returns the type of sublass that the unit is.
		*/
		virtual string getSubClass();

		/**
		* 	The function returns the type of skill that the unit is.
		*/
		virtual string getSkill();

		/**
		*		This function allows a unit to attack another unit and returns the
		*		damage that did not need to be used to kill the other unit. This allows
		*		us to use the chain of responsibility design pattern.
		*		@param other This is the unit that is being attacked.
		*/
		int attack(Unit*);

		/**
		*		The function uses the prototype design pattern to clone the current unit
		* 	and returns a pointer to a Bludgeoning object.
		*/
		virtual Piercing* clone();

		/**
		*		This function uses the observer design pattern to update all the relevent subjects
		*/
		void update();

		//Mediator @TODO doxygen comments
		virtual string event();
		virtual void act();
};

/**
*		@file Piercing.h
* 	@class Thief.
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that provides a Theif for Elemental.
*
*		@section Description
*		This class provides the initialisation for the Thief type of Piercing unit.
*/

class Thief : public Piercing
{
	public:
		/**
		*		The health and damage numbers are pre-known and are as such passed to
		*		the constructor.
		*		The sublass and unit variables are also initialised to their respective
		*		values.
		*/
		Thief() : Piercing(60, 10)
		{
			subClass = "Thief";
			unit = "Player";
		}

};

/**
*		@file Magic.h
* 	@class Goblin.
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that provides a Goblin for Piercing.
*
*		@section Description
*		This class provides the initialisation for the Goblin type of Piercing unit.
*/
class Goblin : public Piercing
{
	public:
		/**
		*		The health and damage numbers are pre-known and are as such passed to
		*		the constructor.
		*		The sublass and unit variables are also initialised to their respective
		*		values.
		*/
		Goblin() : Piercing(50, 12)
		{
			subClass = "Goblin";
			unit = "Monster";
		}
};

#endif
