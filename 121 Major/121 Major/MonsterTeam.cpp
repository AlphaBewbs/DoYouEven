/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#include "MonsterTeam.h"

MonsterTeam::MonsterTeam(GameMaster* _gameMaster)
{
  gameMaster = _gameMaster;
}

void MonsterTeam::initUnits()
{
	MonsterFactory MonsterFactory;
  Unit* tempUnit;

	tempUnit = MonsterFactory.produceMagic();
  addUnit(tempUnit);
	tempUnit = MonsterFactory.producePiercing();
  addUnit(tempUnit);
	tempUnit = MonsterFactory.produceBludgeoning();
  addUnit(tempUnit);
}

void MonsterTeam::turn()
{
  
}

void MonsterTeam::update()
{

}

void MonsterTeam::attack()
{

}
