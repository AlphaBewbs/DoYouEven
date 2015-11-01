#include "GameInterface.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include <vector>

#include "Unit.h"

using namespace std;

GameInterface::GameInterface(Master* _master)
{
	std::cout << "WELCOME TO AN EPIC ADVENTURE" << endl;
	master = _master;
}

GameInterface::~GameInterface()
{
	//@NOTE
}

void GameInterface::chooseHero()
{
	int choice, size;
	string name;

	std::cout << "Time to choose your team!" << endl;
	std::cout << "How many heros would you like?";

	cin >> size;

	while(size <= 0 || size > 5)
	{
		std::cout << "err... ummm... How about a number betwean 1 and 5?" << endl;
		std::cout << "Lets try that again" << endl;
		std::cout << "How many heros would you like?";
		cin >> size;
	}
	std::cout << endl << "Excellent! Lets build your team!" << endl << endl;

	for (int i = 0; i < size; i++)
	{
		std::cout << "Choose your hero number " << i+1 << "!" << endl;
			std::cout << "\t1) Mage" << endl;
			std::cout << "\t2) Thief" << endl;
			std::cout << "\t3) Soldier" << endl;

		cin >> choice;

		while (choice < 1 || choice > 3)
		{
			std::cout << "Thats not a hero..." << endl;
			std::cout << "Choose your hero!" << endl;
			std::cout << "\t1) Mage" << endl;
			std::cout << "\t2) Thief" << endl;
			std::cout << "\t3) Soldier" << endl;

			cin >> choice;
		}
		//@NOTE MAYBE PUT SOME IF STATEMENTS TO MAKE THIS COOLER
		std::cout << endl << "you chose this one... really? well okay!" << endl;

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
		cout << "What should we name this hero? ";
		std::getline (std::cin,name);
		hero->setName(name);

		std::cout << "Well here he is...." << endl;
		std::cout << "('.')" << endl;
		std::cout << "<)'(>" << endl;
		std::cout << "_/'/_ " << endl;

		std::cout << "...ONWARD THEN!" << endl;
		//Tells the master to aadd a unit to the player team
		master->addPlayerTeam(hero);
	}
}

void GameInterface::moveHero()
{
	master->moveHero();
}


void GameInterface::createMonsters()
{
	srand (time(NULL));

	/*string namesArray[] = {"Garry", "Bob", "Slug", "Mom", "Ex Girlfriend", "Saturday", "Leah"};

	vector<string> names;

	for (int j = 0; j < 7; j++)
	names.push_back(namesArray[j]);*/

	int monsterNum;

	std::cout << "Now lets create some monsters for you to kill!! " << endl;

	std::cout << "So how many monsters do you think you can take on...?" << endl;
	std::cout << "I think you can at least handle 3 of them..." << endl;
	std::cout << "How about you choose a number between 3 and 7 then..." << endl;

	cin >> monsterNum;

	while(monsterNum < 3 || monsterNum > 7)
	{
		std::cout << endl;
		std::cout << "How about you choose a number between 3 and 7 then...";
		cin >> monsterNum;
	}

	Unit* elemental = monsterFactory.produceMagic();
	Unit* ogre = monsterFactory.produceBludgeoning();
	Unit* goblin = monsterFactory.producePiercing();


	/*int nameChoice = rand() % 7;
	elemental->setName(names.at(nameChoice));
	names.erase (names.begin() + nameChoice);

	nameChoice = rand() % 7;
	ogre->setName("ERA");
	names.erase (names.begin() + nameChoice);

	nameChoice = rand() % 7;
	goblin->setName("Bob");
	names.erase (names.begin() + nameChoice);*/

	elemental->setName("gReg");
	ogre->setName("ERA");
	goblin->setName("Bob");
	std::cout << endl;

	master->addMonsterTeam(elemental);
	master->addMonsterTeam(ogre);
	master->addMonsterTeam(goblin);

	int extraMonsters = monsterNum - 3;

	if(extraMonsters > 0)
	{
		Unit** monsters = new Unit*[extraMonsters];

		for(int count = 0; count < extraMonsters; count++)
		{
			size_t monsterType = rand() % 3 + 1;

			if (monsterType == 1)
			{
				monsters[count] = elemental->clone(); //prototype
				master->addMonsterTeam(monsters[count]);
			}
			else if (monsterType == 2)
			{
				monsters[count] = ogre->clone(); //prototype
				master->addMonsterTeam(monsters[count]);
			}
			else if (monsterType == 3)
			{
				monsters[count] = goblin->clone(); //prototype
				master->addMonsterTeam(monsters[count]);
			}

		}
	}
	std::cout << "Well done!!" << endl;
	std::cout << "Now you can start tackling those monsters.. All the best!!" << endl;
}

void GameInterface::print()
{
	master->print();
}

void GameInterface::moveMonsters()
{
	master->moveMonsters();
}
