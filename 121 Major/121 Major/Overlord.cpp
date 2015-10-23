/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#include "Overlord.h"

void Overlord::add(Unit* unit)
{
	string type = unit.getSubClass();
	if (type == "Mage" || type == "Soldier" || type == "Thief")
		players.push_back(unit);
	else
		monsters.push_back(unit);

}

void Overlord::attach(Unit *unit)
{
	string type = unit.getSubClass();

	if (type == "Mage" || type == "Soldier" || type == "Thief")
		players.push_back(unit);
	else
		monsters.push_back(unit);

	unit->registerGameMaster(this);
}

void Overlord::detach(Unit *unit)
{
	if (type == "Mage" || type == "Soldier" || type == "Thief")
		for(int i = 0; i < players.size(); ++i)
			if(unit == players[i])
				players.erase(players.begin() + i);
	else
		for(int i = 0; i < monsters.size(); ++i)
			if(unit == monsters[i])
				monsters.erase(monsters.begin() + i);
}

void Overlord::notify()
{
	for(int i = 0; i < players.size(); ++i)
		players[i]->update();

	for(int i = 0; i < monsters.size(); ++i)
		monsters[i]->update();
}

string Overlord::state()
{
	return state;
}

void Overlord::setState(string _state)
{
	state = _state;
	notify();
}