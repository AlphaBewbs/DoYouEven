/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include "subject.h"

//Concrete Observer//
class Environment : public Subject
{
	private:
		string mState;
	public:
		Environment();
		string state();
		void setState(string);	
};

#endif