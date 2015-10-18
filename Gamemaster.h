/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#ifndef GAMEMASTER_H
#define GAMEMASTER_H
#include "Team.h"
#include <iostream>

using namespace std;

class Gamemaster
{
	public:
		Gamemaster(string t1, string t2);

	private:
		string team1;
		string team2;
		Team* teamA;
		Team* teamB;

};
#endif