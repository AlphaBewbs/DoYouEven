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
*		@file Unitfactory.h
*		@class UnitFactory
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This class allows us to produce Units depending on the Team.
*
*		@section Description
*		This class is the UnitFactory in the Abstract Factory design pattern.
*
*/
#ifndef UNITFACTORY_H
#define UNITFACTORY_H

#include "Unit.h"
#include "Magic.h"
#include "Bludgeoning.h"
#include "Piercing.h"

class UnitFactory
{
	public:
		/**
		*	This function allows us to produce a Magic Unit and returns a pointer to it.
		**/
		virtual Magic* produceMagic() = 0;

		/**
		*	This function allows us to produce a Bludgeoning Unit and returns a pointer to it.
		**/
		virtual Bludgeoning* produceBludgeoning() = 0;

		/**
		*	This function allows us to produce a Piercing Unit and returns a pointer to it.
		**/
		virtual Piercing* producePiercing() = 0;
};


/**
*		@file Unitfactory.h
*		@class PlayerFactory
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This class allows us to produce Units for the Player Team.
*
*		@section Description
*		This class is the Concrete Factory in the Abstract Factory design pattern.
*
*/
class PlayerFactory : public UnitFactory
{
public :
	/**
	*	This function creastes and returns a Mage object
	**/
	Magic* produceMagic()
	{
		return new Mage();
	}

	/**
	*	This function creates and returns a Soldier object
	**/
	Bludgeoning* produceBludgeoning()
	{
		return new Soldier();
	}

	/**
	*	This function creates and returns a Thief object
	**/
	Piercing* producePiercing()
	{
		return new Thief();
	}
};


/**
*		@file Unitfactory.h
*		@class MonsterFactory
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This class allows us to produce Units for the Monster Team.
*
*		@section Description
*		This class is the Concrete Factory in the Abstract Factory design pattern.
*
*/
class MonsterFactory : public UnitFactory
{
public :
	/**
	*	This function creastes and returns an Elemental object
	**/
	Magic* produceMagic()
	{
		return new Elemental();
	}

	/**
	*	This function creastes and returns an Ogre object
	**/
	Bludgeoning* produceBludgeoning()
	{
		return new Ogre();
	}

	/**
	*	This function creastes and returns a Goblin object
	**/
	Piercing* producePiercing()
	{
		return new Goblin();
	}
};

#endif
