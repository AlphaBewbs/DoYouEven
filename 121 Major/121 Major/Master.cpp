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

//@NOTE we dont need this
/*
void Master::addToMap(Team* team)
{
	for (size_t i = 0; i < team->getSize(); i++)
		addToMap(team->getUnitAt(i));
}*/

//@CHANGED
Point Master::locateUnit(Unit* unit)
{
    Point location;
    for (size_t i = 0; i < map->getY; i++)
        for (size_t j = 0; j < map->getX; j++)
            if(unitGrid[i][j] == unit)
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
void Master::addMonsterTeam(Unit* monster)
{
	monsters->addUnit(monster);
}
void Master::addPlayerTeam(Unit* player)
{
	heros->addUnit(player);
}

//@NOTE this function will move the enemies
void Master::moveMonsters()
{
	for (size_t i = 0; i < monsters->getSize(); i++)
	{
		Unit* enemy = monsters->getUnitAt(i);
		Point location = locateUnit(enemy);

		int x = location.x;
		int y = location.y;
		srand(time(0));
		do {
			x = location.x;
			y = location.y;

			// (rand() % map->rows) + 1
			//do a random variable from 1-100;

			if(chance >= 0 && chance < 25)
				x++;
			else if(chance >= 25 && chance < 50)
				y++;
			else if(chance >= 50 && chance < 75)
				y--;
			else
				x--;

		} while (!map->availableSpace(x, y));
		unitGrid[x][y] = enemy;
	}
}//@NOTE THIS SHOULD FUCKING WORK

bool Master::canUnitAttack(Unit* unit)
{
	Point location = this->locateUnit(unit);

	bool wsda[4];
	wsda[0] = map->availableSpace(location.x, y + 1);
	wsda[1] = map->availableSpace(location.x, y - 1);
	wsda[2] = map->availableSpace(location.x + 1, y);
	wsda[3] = map->availableSpace(location.x - 1, y);

	int rand;
	do
	{
		// (rand() % map->rows) + 1
		//do a random variable from 1-100;

	}while(wsda[rand] == false);

	return wsda[rand];
}
