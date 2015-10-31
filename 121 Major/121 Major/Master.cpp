#include "Master.h"
#include "HeroTeam.h"
#include "MonsterTeam.h"
#include "Unit.h"
#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

//@CHANGED
Master::Master()
{
    turn = 0;
    heros = new HeroTeam;
    monsters = new MonsterTeam;

	map = new Map("Map.txt");
	unitGrid = new Unit **[map->getX()];

	for (int j = 0; j < map->getX(); j++)
		unitGrid[j] = new Unit *[map->getY()];

	for (int i = 0; i < map->getY(); i++)
		for (int j = 0; j < map->getX(); j++)
				unitGrid [j][i] = NULL;
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
	unit->update(); //@CHANGED
}

//@CHANGED
void Master::moveHero()
{
	for (int j = 0; j < heros->getSize(); j++)
	{
		Unit * unit = heros->getUnitAt(j);
		Point location = locateUnit(unit);

		int y = location.y;
		int x = location.x;

		char direction;
		cout << "Where do you wanna go? ";
		cin >> direction;

		direction = toupper(direction);
		switch (direction)
		{
		case 'W': x--; break;
		case 'S': x++; break;
		case 'D': y++; break;
		case 'A': y--; break;
		}

		if (map->Move(x, y, location.x, location.y))
		{
			unitGrid[x][y] = unitGrid[location.x][location.y];
			unitGrid[location.x][location.y] = NULL;
			map->addUnit('K', location.x, location.y);
			map->addUnit('H', x, y);
		}
		else
		{
			cout << "[FAILURE]" << endl;
		}
	}

}

void Master::attack(Unit* unit, Team* team)
{
	//@NOTE this took longer than you would think
	team->takeDamage(unit);
}


void Master::addToMap(Unit* unit)
{
	int x, y;
	string type = unit->getSubClass();

	//Put player in a random position
	srand(time(0));
	do {
 		x = (rand() % (map->getX()));
		y = (rand() % (map->getY()));
	} while (!map->availableSpace(x, y));

	unitGrid[x][y] = unit;

	if (type == "Mage" || type == "Soldier" || type == "Thief")
	{
		cout << "Adding player to position [" << x << ',' << y << ']' << endl;
		map->addUnit('H', x, y);
	}
	else
	{
		cout << "Adding Monster to position [" << x << ',' << y << ']' << endl;
		map->addUnit('M', x, y);
	}

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
    for (int i = 0; i < map->getY(); i++)
        for (int j = 0; j < map->getX(); j++)
            if(unitGrid[i][j] == unit)
            {
				location.y = j;
                location.x = i;
                return location;
            }
}

void Master::removeDestroyedUnits()
{

}

//void Master::notify(Unit*)
//{
//} @changed

//@NOTE This is new
void Master::addMonsterTeam(Unit* monster)
{
	monsters->addUnit(monster);
	addToMap(monster);
}

void Master::addPlayerTeam(Unit* player)
{
	heros->addUnit(player);
	addToMap(player);
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

		map->addUnit(' ', x, y);

		int chance = 0;
		do {
			x = location.x;
			y = location.y;

			chance = rand() % 100 + 1;
			cout << '\t' << chance << endl;

			if(chance >= 0 && chance < 25)
				x++;
			else if(chance >= 25 && chance < 50)
				y++;
			else if(chance >= 50 && chance < 75)
				y--;
			else
				x--;

		} while (!map->Move(x, y, location.x, location.y));

		unitGrid[x][y] = unitGrid[location.x][location.y];

		unitGrid[location.x][location.y] = NULL;

		/*cout << "unit" << endl;
		cout << location.x << '\t' << location.y << endl;
		cout << x << '\t' << y << endl;*/
		map->addUnit('M', x, y);
	}
}//@NOTE THIS SHOULD FUCKING WORK

bool Master::canUnitAttack(Unit* unit)
{
	Point location = this->locateUnit(unit);

	bool wsda[4];
	wsda[0] = map->availableSpace(location.x, location.y + 1);
	wsda[1] = map->availableSpace(location.x, location.y - 1);
	wsda[2] = map->availableSpace(location.x + 1, location.y);
	wsda[3] = map->availableSpace(location.x - 1, location.y);

	int chance = rand() % 4 + 1;;
	do
	{

	}while(wsda[chance] == false);

	return wsda[chance];
}

void Master::print()
{
	map->printMap();
}
