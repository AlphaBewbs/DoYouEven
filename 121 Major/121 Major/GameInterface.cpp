#include "GameInterface.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

GameInterface::GameInterface()
{
	units = new Unit*[100];
	cout << "WELCOME TO AN EPIC ADVENTURE" << endl;

	cout << "	°*”˜˜”*°•.¸★★¸.•°*”˜˜”*°" << endl;
	cout << "(¸.•´ (¸.•´ .•´ ¸¸.•¨¯`•" << endl;
	cout << "∩ │◥███◣ ╱◥███◣" << endl;
	cout << "╱◥◣ ◥████◣▓∩▓│∩ ║" << endl;
	cout << "│╱◥█◣║∩∩∩ ║◥█▓ ▓█◣" << endl;
	cout << "││∩│ ▓ ║∩田│║▓ ▓ ▓∩ ║" << endl;

Read more: http://loveusms.in/smslist/lang/A/cid/10/page/14#ixzz3pd9QLUOE

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
		cout << endl << "you chose this one... really? well okay!" << endl;


		cout << "Well here he is...." << endl;
		cout << "('.')" << endl;
		cout << "<)'(>" << endl;
		cout << "_/'/_ " << endl;

		cout << "...ONWARD THEN!"

		Unit* hero = new Unit;

		switch (choice)
		{
			case 1:
				hero = PlayerFactory.produceMagic();
				break;
			case 2:
				hero = PlayerFactory.producePiercing();
				break;
			case 3:
				hero = PlayerFactory.produceBludgeoning();
				break;
		}
		//Tells the master to aadd a unit to the player team
		master.addPlayerTeam(hero);
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

void GameInterface::createMonsters()
{
	int monsterNum;

	cout << "Now lets create some monsters for you to kill!! "
	cout << endl;
	cout << "*___ ____ _____ _____/|__" <<endl;
	cout << "../ /////­___(___)_________ ()" <<endl;
	cout << "./­_________________(___­_()" <<endl;
	cout << "......)-------(_(__)­)" <<endl;
	cout << "..//-----//" <<endl;
	cout << ".//-----//" <<endl;
	cout << "//___//•" <<endl;
	cout << "»"

	cout << "So how many monsters do you think you can take on...?" << endl;
	cout << "I think you can at least handle 3 of them..." << endl;
	cout << "How about you choose a number between 3 and 7 then..." << endl;

	cin >> monsterNum;

	while(monsterNum < 3 || monsterNum > 7)
	{
		cout << endl;
		cout << "How about you choose a number between 3 and 7 then..." << endl;
		cin >> monsterNum;
	}

	if(monsterNum == 3)
	{
			Unit* elemental = new Unit;
			Unit* ogre = new Unit;
			Unit* goblin = new Unit;

			master.addMonsterTeam(elemental);
			master.addMonsterTeam(ogre);
			master.addMonsterTeam(goblin);
	}
	else
	{
		Unit* elemental = new Unit;
		Unit* ogre = new Unit;
		Unit* goblin = new Unit;

		elemental = MonsterFactory.produceMagic();
		ogre = MonsterFactory.produceBludgeoning()
		goblin = MonsterFactory.producePiercing();

		master.addMonsterTeam(elemental);
		master.addMonsterTeam(ogre);
		master.addMonsterTeam(goblin);

		int extraMonsters = monsterNum - 3;
		Unit** monsters = new Unit*[extraMonsters];

		for(int count = 0; count < monsterNum; count++)
		{
			srand (time(NULL));
			int monsterType = rand() % 3 + 1;

			if(monsterType == 1 )
			{
					monsters[count] = new Unit;
					monsters[count] = elemental->clone(); //prototype
					master.addMonsterTeam(monsters[count]);
					cout << "Creating a Monster: ";
					cout << monsters[count]->getDescription() << endl;

			}
			else if (monsterType == 2 )
			{
					monsters[count] = new Unit;
					monsters[count] = ogre->clone(); //prototype
					master.addMonsterTeam(monsters[count]);
					cout << "Creating a Monster: ";
					cout << monsters[count]->getDescription() << endl;

			}
			else if (monsterType == 3 )
			{
					monsters[count] = new Unit;
					monsters[count] = goblin->clone(); //prototype
					master.addMonsterTeam(monsters[count]);
					cout << "Creating a Monster: ";
					cout << monsters[count]->getDescription() << endl;

			}

			cout << "	Well done!!" << endl;
			cout << " Now you can start tackling those monsters.. All the best!!" << endl;
			cout << "             __" << endl;
			cout << "	.......... /--)" << endl;
			cout << "	........./.../" << endl;
			cout << "	......./....(__ ____" << endl;
			cout << "	▓▓..........((_ i___)" << endl;
			cout << "	▓▓..........((_ i___)" << endl;
			cout << "	▓▓..........((_ i___)" << endl;
			cout << "	▓▓---.___((_i__ )" << endl;


		}
	}
}
