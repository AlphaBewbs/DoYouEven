#include "Gamemaster.h"

Gamemaster::Gamemaster(string t1, string t2)
{
	team1 = t1;
	team2 = t2;
	
	//Team* teamA = 0;
	//Team* teamB = 0;
	teamA = new Team(team1);
	teamB = new Team(team2);

}