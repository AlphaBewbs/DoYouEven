/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#include "HeroTeam.h"

HeroTeam::HeroTeam(GameMaster*  _gameMaster)
{
  gameMaster = _gameMaster;
}

void HeroTeam::initUnits()
{
	PlayerFactory playerFactory;
  Unit* tempUnit;

	tempUnit = playerFactory.produceMagic();
  addUnit(tempUnit);
	tempUnit = playerFactory.producePiercing();
  addUnit(tempUnit);
	tempUnit = playerFactory.produceBludgeoning();
  addUnit(tempUnit);
}

void HeroTeam::turn()
{

}

void HeroTeam::update()
{

}

void HeroTeam::attack()
{
	for
}
