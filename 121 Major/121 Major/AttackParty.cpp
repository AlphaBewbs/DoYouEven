/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#include "AttackParty.h"

void AttackParty::notify(Unit *_unit)
{
	string event = _unit->event();
	/* EXAMPLE CODE
	cout << "The soldier is " << event << " that something moved." << endl;
	if(event == "sure")
	{
		cout << "The soldier is beeing taken seriously." << endl;
		for(int i = 0; i < mSoldiers.size(); ++i)
		{
			mSoldiers[i]->act();
		}
	}
	else
	{
		cout << "The soldier is not beeing taken seriously." << endl;
	}

	IM USURE AS TO WHAT TO REPLACE IT WITH*/
}

void AttackParty::add(Unit * _unit)
{
	unitParty.push_back(_unit);
	_unit->setSquad(this);
}