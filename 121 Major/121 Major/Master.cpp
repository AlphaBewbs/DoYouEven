#include "Master.h"
#include "HeroTeam.h"
#include "MonsterTeam.h"
#include <stdio.h>
#include <ctype.h>

//@CHANGED
Master::Master()
{
    turn = 0;
    heros = new HeroTeam;
    momsters = new MonsterTeam;

	map = new Map;
    unitGrid = new unit[map->getX][map->getY];

		for (size_t i = 0; i < map->getY; i++)
        for (size_t j = 0; j < map->getX; j++)
						unitGrid [j][i] = 0;
}

void Master::attachUnit(Unit* unit)
{
    //@TODO sort this function out
}

void Master::detachUnit(Unit* inputUnit)
{
    //@TODO and his one
}

void Master::notify(Unit* unit)
{
  unit.notify();
}

//@CHANGED
bool Master::moveUnit(Unit* unit, char direction)
{
		Point p = locateUnit(unit);
		int y = location.y;
		int x = location.x;

    direction = toupper(direction);
    switch(direction)
    {
        case 'W': y++; break;
        case 'S': y--; break;
        case 'D': x++; break;
        case 'A': x--; break;
    }
		if(map->Move(x, y, location.x, location.y))
		{
			unitGrid[x][y] = unitGrid[location.x][location.y];
			unitGrid[location.x][location.y] = 0;
			return true;
		}
		else
		{
			return false;
		}

}

void Master::attack(Unit* unit, Team* team)
{
	//@NOTE this took longer than you would think
	team->takeDamage(unit);
}

void Master::printMap()
{
    map->printMap();
}


void Master::addToMap(Unit* unit)
{
	int x, y;
	string type = unit->getSubClass();

	if(type == "Mage" || type == "Soldier" || type == "Thief")
		heros->addUnit(unit);
	else
		monsters-addUnit(unit);

	//Put player in a random position
	srand(time(0));
	do {
		x = (rand() % map->rows) + 1;
		y = (rand() % map->columns) + 1;
	} while (!map->availableSpace(x, y));

	cout << "Adding player to position [" << x << ',' << y << ']' << endl;
	unitGrid[x][y] = Unit;
}

//@NOTE this is new
void Master::addToMap(Team* team)
{
	for (size_t i = 0; i < team->getSize(); i++)
		addToMap(team->getUnitAt(i));
}

//@CHANGED
Point Master::locateUnit(Unit* unit)
{
    Point location;
    for (size_t i = 0; i < map->getY; i++)
        for (size_t j = 0; j < map->getX; j++)
            if(unitGrid[x][y] == unit)
            {
				location.y = i;
                location.x = j;
                return location;
            }
}

void Master::removeDestroyedUnits()
{

}

void Master::notify(Unit*)
{
}

//@NOTE This is new
void Master::buildMonsterTeam(Unit* monster)
{
	MonsterTeam->addUnit(player);
}
void Master::buildPlayerTeam(Unit* player)
{
	HeroTeam->addUnit(player);
}
