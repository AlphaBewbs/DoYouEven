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
*		@class Magic
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that stores units of the Magic type.
*
*		@section Description
*		This class provides access to the attribules of all the Bludgeoning units
*		and access to clone them.
*
*/
#ifndef MAGIC_H
#define MAGIC_H

#include "Unit.h"
#include "Environment.h"

using namespace std;

class Magic : public Unit
{
	private:
		//Observer
		string state;

	public:
		/**
		*		The constructor creates an instance of the class.
		*		@param int passes the health of the Magic object.
		*		@param int passes the damage that the Magic object causes.
		*/
		Magic(int, int); 	//Health, damage

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
		int attack(Unit* other);

		/**
		*		The function uses the prototype design pattern to clone the current unit
		* 	and returns a pointer to a Bludgeoning object.
		*/
		virtual Magic* clone();

		/**
		*		This function uses the observer design pattern to update all the relevent subjects
		*/
		void update();

		//Mediator @TODO doxygen comments
		virtual string event();
		virtual void act();
};

/**
*		@file Magic.h
* 	@class Mage
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that provides a Mage for Magic
*
*		@section Description
*		This class provides the initialisation for the Mage type of Magic Unit.
*/

class Mage : public Magic
{
	public:
		/**
		*		The health and damage numbers are pre-known and are as such passed to
		*		the constructor.
		*		The sublass and unit variables are also initialised to their respective
		*		values.
		*/
		Mage() :Magic(80, 5)
		{
			subClass = "Mage";
			unit = "Player";
		}
};


/**
*		@file Magic.h
* 	@class Mage
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that provides an Elemental for Magic
*
*		@section Description
*		This class provides the initialisation for the Elemental type of Unit.
*/
class Elemental : public Magic
{
	public:
		/**
		*		The health and damage numbers are pre-known and are as such passed to
		*		the constructor.
		*		The sublass and unit variables are also initialised to their respective
		*		values.
		*/
		Elemental() :Magic(85, 4)
		{
			subClass = "Elemental";
			unit = "Monster";
		}
};


#endif
