/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#include "Team.h"
#include "Unit.h"


Team::Team(Master*_master)
{
	master = _master;
}

void Team::addUnit(Unit *unit)
{
	units.push_back(unit);
	unit->registerMaster(master);
}

//@NOTE we this might be useless
void Team::attack()
{
	//for(int j = 0; j <= units.size(); j++)
		//units[j]->attack
}

void Team::takeDamage(Unit* unitAttacker)
{
	Unit* unitDefender = 0;
	int count = 0;
	int dmg;

	do
	{
		unitDefender = getUnitAt(count);
		dmg = unitAttacker->attack(unitDefender);
		count++;

	}while(dmg > 0);
}

int Team::getSize()
{
	return units.size();
}

Unit* Team::getUnitAt(int position)
{
	return units.at(position);
}

void Team::setMaster(Master* _master)
{
	master = _master;
}
