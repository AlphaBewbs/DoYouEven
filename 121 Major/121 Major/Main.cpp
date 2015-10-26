/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#include "UnitFactory.h"
#include "Master.h"

int main()
{
	Unit** units = new Unit*[100];
	Unit* tempUnit = 0;

	PlayerFactory playerFactory;
	MonsterFactory monsterFactory;

	int count = 0;

	//Players

	tempUnit = playerFactory.produceMagic();
	units[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		units[count++] = tempUnit->clone();
	}

	tempUnit = playerFactory.producePiercing();
	units[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		units[count++] = tempUnit->clone();
	}

	tempUnit = playerFactory.produceBludgeoning();
	units[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		units[count++] = tempUnit->clone();
	}

	//Monsters


	tempUnit = monsterFactory.produceMagic();
	units[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		units[count++] = tempUnit->clone();
	}

	tempUnit = monsterFactory.producePiercing();
	units[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		units[count++] = tempUnit->clone();
	}

	tempUnit = monsterFactory.produceBludgeoning();
	units[count++] = tempUnit;
	for (int j = 0; j < 5; j++)
	{
		units[count++] = tempUnit->clone();
	}

	cout << endl;
	cout << units[5]->getDescription();
	cout << endl;
	cout << units[6]->getDescription();
	cout << endl;

	units[6]->attack(units[5]);
	cout << endl;
	cout << units[5]->getDescription();
	cout << endl;
	cout << units[6]->getDescription();
	cout << endl;

	cout << units[15]->getDescription();
	cout << endl;
	units[6]->attack(units[15]);
	cout << endl;
	cout << units[6]->getDescription();
	cout << endl;
	cout << units[15]->getDescription();
	cout << endl;

	system("pause");
	return 0;
}
