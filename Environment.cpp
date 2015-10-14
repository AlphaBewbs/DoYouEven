/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
#include "environment.h"

Environment::Environment()
	: Subject()
{
	mState = "";
}

string Environment::state()
{
	return mState;
}

void Environment::setState(string _state)
{
	mState = _state;
	if(mState == "")
	{
		cout << "Is quiet.. too quiet." << endl;
	}
	else if(mState == "Fightig")
	{
		cout << "A unit has fallen..." << endl;
	}
	notify();
}
