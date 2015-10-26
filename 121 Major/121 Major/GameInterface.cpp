#include "GameInterface.h"
#include <iostream>
#include <stdlib.h>

#include "Unit.h"

#include <stdio.h>
#include <time.h>

using namespace std;

GameInterface::GameInterface()
{
	cout << "WELCOME TO AN EPIC ADVENTURE" << endl;

//Read more: http://loveusms.in/smslist/lang/A/cid/10/page/14#ixzz3pd9QLUOE

}
GameInterface::~GameInterface()
{
	//@NOTE
}

void GameInterface::chooseHero()
{
	int choice, size;

	cout << "Time to choose your team!" << endl;
	cout << "How many heros would you like?";

	cin >> size;

	while(size <= 0 || size > 5)
	{
		cout << "err... ummm... How about a number betwean 1 and 5?" << endl;
		cout << "Lets try that again" << endl;
		cout << "How many heros would you like?";
		cin >> size;
	}
	cout << endl << "Excellent! Lets build your team!" << endl << endl;

	for (int i = 0; i < size; i++)
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

//@NOTE come back here
		cout << "Well here he is...." << endl;
		cout << "('.')" << endl;
		cout << "<)'(>" << endl;
		cout << "_/'/_ " << endl;

		cout << "...ONWARD THEN!" << endl;

		Unit* hero = NULL;
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
	}
}


void GameInterface::createMonsters()
{
	int monsterNum;

	cout << "Now lets create some monsters for you to kill!! " << endl;

	cout << "So how many monsters do you think you can take on...?" << endl;
	cout << "I think you can at least handle 3 of them..." << endl;
	cout << "How about you choose a number between 3 and 7 then..." << endl;

	cin >> monsterNum;

	while(monsterNum < 3 || monsterNum > 7)
	{
		cout << endl;
		cout << "How about you choose a number between 3 and 7 then...";
		cin >> monsterNum;
	}

	if(monsterNum == 3)
	{
		Unit* elemental;
		Unit* ogre;
		Unit* goblin;

		elemental = monsterFactory.produceMagic();
		ogre = monsterFactory.produceBludgeoning();
		goblin = monsterFactory.producePiercing();
		cout << endl;

		master.addMonsterTeam(elemental);
		master.addMonsterTeam(ogre);
		master.addMonsterTeam(goblin);
	}
	else
	{
		Unit* elemental;
		Unit* ogre;
		Unit* goblin;

		elemental = monsterFactory.produceMagic();
		ogre = monsterFactory.produceBludgeoning();
		goblin = monsterFactory.producePiercing();
		cout << endl;

		master.addMonsterTeam(elemental);
		master.addMonsterTeam(ogre);
		master.addMonsterTeam(goblin);

		int extraMonsters = monsterNum - 3;
		Unit** monsters = new Unit*[extraMonsters];
		
		for(int count = 0; count < extraMonsters; count++)
		{cout << "boobs" << endl;
			srand (time(NULL));
			size_t monsterType = rand() % 3 + 1;

			if (monsterType == 1)
			{
				monsters[count] = elemental->clone(); //prototype
				master.addMonsterTeam(monsters[count]);
			}
			else if (monsterType == 2)
			{
				monsters[count] = ogre->clone(); //prototype
				master.addMonsterTeam(monsters[count]);
			}
			else if (monsterType == 3)
			{
				monsters[count] = goblin->clone(); //prototype
				master.addMonsterTeam(monsters[count]);
			}

		}
	}
	cout << "Well done!!" << endl;
	cout << "Now you can start tackling those monsters.. All the best!!" << endl;
}

void GameInterface::print()
{
	master.print();
}

void GameInterface::moveMonsters()
{
	master.moveMonsters();
}