#include "Gamemaster.h"
#include "Team.h";

#include <iostream>

using namespace std;

GameMaster::GameMaster()
{

}

void GameMaster::attachTeam(Team* inputTeam)
{
    team = inputTeam;
}

void GameMaster::detachTeam(Team* inputTeam)
{
    team = NULL;
}
