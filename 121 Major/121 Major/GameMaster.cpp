#include "Gamemaster.h"
#include <iostream>

using namespace std;

GameMaster::GameMaster()
{

}

virtual void GameMaster::attachTeam(Team* inputTeam)
{
    team = inputTeam;
}

virtual void GameMaster::detachTeam(Team* inputTeam)
{
    team = NULL;
}
