/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <string>
#include <iostream>
#include "Unit.h"

using namespace std;

class Subject
{
	private:
		vector<Unit*> mObservers;

	public:
		void attach(Unit *);
		void detach(Unit *);
		void notify();

		virtual string state() = 0;
		virtual void setState(string state) = 0;
};
