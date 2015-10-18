#include "Team.h"

Team::Team(string name)
{
	teamName = name;

	Unit** teamName = new Unit*[50];
	Unit* tempUnit = 0;
	int count = 0;

	PlayerFactory playerFactory;
	MonsterFactory monsterFactory;
	
	//Players

	tempUnit = playerFactory.produceMagic();
	teamName[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		teamName[count++] = tempUnit->clone();
	}

	tempUnit = playerFactory.producePiercing();
	teamName[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		teamName[count++] = tempUnit->clone();
	}

	tempUnit = playerFactory.produceBludgeoning();
	teamName[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		teamName[count++] = tempUnit->clone();
	}

	//Monsters


	tempUnit = monsterFactory.produceMagic();
	teamName[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		teamName[count++] = tempUnit->clone();
	}

	tempUnit = monsterFactory.producePiercing();
	teamName[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		teamName[count++] = tempUnit->clone();
	}

	tempUnit = monsterFactory.produceBludgeoning();
	teamName[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		teamName[count++] = tempUnit->clone();
	}

	players = count;
}