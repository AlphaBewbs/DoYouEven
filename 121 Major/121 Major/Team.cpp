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

Team()

Team(GameMaster*_gameMaster)
{
	gameMaster = _gameMaster;
}

void Team::addUnit(Unit *unit)
{
	units.push_back(unit);
	unit->registerGameMaster(this);
}

virtual void attack()
{
	for(int j = 0; j <= units.size(); j++)
		unts[j].
}

void Team::takeDamage(int dmg)
{
	Unit* unit = getUnitAt(0);
	int count = 1;

	do
	{
			unit = getUnitAt(count);
			count++;

	}while(unit.takeDamage(dmg) > 0);
}

int Team::getSize()
{
	return units.size();
}

Unit* Team::getUnitAt(int position)
{
	return units.at(position)
}

void Team::setGameMaster(GameMaster* _gameMaster)
{
	gameMaster = _gameMaster;
}
