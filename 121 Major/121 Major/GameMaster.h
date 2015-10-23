/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

/*
This will function as a joint Observer-Mediator abstract class.
The observer will help better observe the objects will the mediator enables communtication
between the collegues(subjects)
*/

#ifndef GAMEMASTER_H
#define GAMEMASTER_H
#include "Unit.h"

class GameMaster
{
public:
	virtual ~GameMaster(){};

	virtual string state() = 0;
	virtual void setState(string state) = 0;
	virtual void attack() = 0;
	virtual void update() = 0;
};

#endif
