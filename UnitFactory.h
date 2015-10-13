/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#ifndef UNITFACTORY_H
#define UNITFACTORY_H

#include "Unit.h"
#include "Magic.h"
#include "Bludgeoning.h"
#include "Piercing.h"

class UnitFactory
{
	public:
		virtual Magic* produceMagic() = 0;
		virtual Bludgeoning* produceBludgeoning() = 0;
		virtual Piercing* producePiercing() = 0;
};

class PlayerFactory : public UnitFactory
{
public :
	Magic* produceMagic()
	{
		return new Mage();
	}

	Bludgeoning* produceBludgeoning()
	{
		return new Soldier();
	}

	Piercing* producePiercing()
	{
		return new Thief();
	}
};

class MonsterFactory : public UnitFactory
{
public :
	Magic* produceMagic()
	{
		return new Elemental();
	}

	Bludgeoning* produceBludgeoning()
	{
		return new Ogre();
	}

	Piercing* producePiercing()
	{
		return new Goblin();
	}
};

#endif