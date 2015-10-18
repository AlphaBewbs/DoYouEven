#include "Interface.h"

Interface::Interface()
{
	units = new Unit*[100];
	cout << "WELCOME TO AN EPIC ADVENTURE" << endl;
}
Interface::~Interface()
{
	for (int j = 0; j < 100; j++)
		delete units[j];

	delete units;
}

void Interface::chooseHero()
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

void Interface::chooseCompanion()
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