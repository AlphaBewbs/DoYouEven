/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
//@NOTE This is our concrete mediator
#ifndef MASTER_H
#define MASTER_H

#include "GameMaster.h"
#include "Map.h"
using namespace std;

class Master : public GameMaster
{
	private:
		Map* map;
    	Unit*** teamGrid;

	public:
    	virtual	void attachUnit(Unit*);
		virtual void detachUnit(Unit*);
		virtual bool moveUnit(Unit*, char);
		void attack(Unit*, Team*);

		//@CHANGED This getUnitAt function is removed
		//Unit* getUnitAt(int index);

		virtual void printMap();
		virtual void addToMap(Unit* inputUnit);

		//@NOTE This is new
		virtual void addToMap(Team*);
		void addMonsterTeam(Unit*);
		void addPlayerTeam(Unit*);

		virtual void notify(Unit*);
		virtual Point locateUnit(Unit*);

		virtual void removeDestroyedUnits();
    	virtual void notify(Unit*);

};

#endif
