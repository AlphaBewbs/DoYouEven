#include "GameInterface.h"

GameInterface::GameInterface()
{
	units = new Unit*[100];
	cout << "WELCOME TO AN EPIC ADVENTURE" << endl;
}
GameInterface::~GameInterface()
{
	for (int j = 0; j < playerSize; j++)
		delete playerUnits[j];
	delete playerUnits;

	for (int j = 0; j < monsterSize; j++)
		delete monsterUnits[j];
	delete monsterUnits;
}

void GameInterface::createUnits()
{
	Unit* tempUnit = 0;

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





void GameInterface::chooseHero()
{
	int choice, size;

	cout << "Time to choose your team!" << endl;
	cout << "How many heros would you like?";
	cin >> size;

	while(playerSize <= 0 || playerSize > 5)
	{
		cout << "err... ummm... How about a number betwean 1 and 5?" << endl;
		cout << "Lets try that again" << endl;
		cout << "How many heros would you like?";
		cin >> size;
	}
	cout << endl << "Excellent! Lets build your team!" << endl << endl;

	for (size_t i = 0; i < playerSize; i++)
	{
		cout << "Choose your hero number " << i << "!" << endl;
			cout << "\t1) Mage" << endl;
			cout << "\t2) Thief" << endl;
			cout << "\t3) Soldier" << endl;

		cin >> choice;

		while (choice < 1 || choice > 3)
		{
			cout << "Thats not a hero..." << endl;
			cout << "Choose your hero!" << endl;
				cout << "\t1) Mage" << endl;
				cout << "\t2) Thief" << endl;
				cout << "\t3) Soldier" << endl;

			cin >> choice;
		}
		//@NOTE MAYBE PUT SOME IF STATEMENTS TO MAKE THIS COOLER
		cout << endl << "you chose that one... really? well okay... ONWARD THEN!" << endl;

		Unit* hero = new Unit;

		switch (choice)
		{
			case 1:
				hero = playerFactory.produceMagic();
				break;
			case 2:
				hero = playerFactory.producePiercing();
				break;
			case 3:
				hero = playerFactory.produceBludgeoning();
				break;
		}
		//Tells the master to aadd a unit to the player team
		master.addPlayerTeam(hero);
		master.addToMap(hero);
	}
}

//needs work
void GameInterface::chooseCompanion()
{
	int choice;
	Unit * tempUnit;

	cout << "Choose your hero!" << endl;
	cout << "\t1) Mage" << endl;
	cout << "\t2) Thief" << endl;
	cout << "\t3) Soldier" << endl;

	cin >> choice;

	while (choice < 1 || choice > 3)
	{
		cout << "Thats not a hero..." << endl;
		cout << "Choose your hero!" << endl;
		cout << "\t1) Mage" << endl;
		cout << "\t2) Thief" << endl;
		cout << "\t3) Soldier" << endl;

		cin >> choice;
	}

	cout << endl << "you chose that one... really? well okay... ONWARD THEN!" << endl;
	switch (choice)
	{
	case 1:
		tempUnit = playerFactory.produceMagic();
		break;
	case 2:
		tempUnit = playerFactory.producePiercing();
		break;
	case 3:
		tempUnit = playerFactory.produceBludgeoning();
		break;
	}
}
