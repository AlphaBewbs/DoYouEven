/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
/**
*		@file Unit.h
*		@class Unit
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that creates units of the type that is wanted.
* 				 It also acts as the prototype design pattern allowing for the
*				 cloning of units.
*
*		@section Description
*				 The class creates the units and intantiates their attributes.
*
*/
#ifndef UNIT_H
#define UNIT_H

#include <string>
#include <iostream>
#include "Master.h"

using namespace std;

class Unit
{
	protected:
		/**
		*		@brief This is the variable to hold the id of the unit.
		*/
		int id;

		/**
		*		@brief This is the variable to hold the health of the unit.
		*/
		int health;

		/**
		*		@brief This is the variable to hold the damage of the unit.
		*/
		int damage;

		/**
		*		@brief This is the variable to hold the type of subclass that the unit
		*		is in.
		*/
		string subClass;	//Either mage, soldier or thief

		/**
		*		@brief This is the variable to hold the skill that the Unit posseses.
		*/
		string skill;	//Either magic, bludgeoning or piercing

		/**
		*		@brief This is the variable to hold the unit's type.
		*/
		string unit;	//Either a player/hero or monster/mob

		//Observer-Mediator
		Master* master;

	public:
		/**
		*		The Constructor for the Unit object.
		*		@param _health the value that the health of the unit should be initialised to.
		*		@param _damage the value that the damage of the unit should be initialised to.
		*/
		Unit(int, int);
		/**
		*		This function prints a description of the unit. i.e health, damage, type, subclass.
		*/
		virtual string getDescription() const;
		/**
		*		This function returns the type of unit.
		*/
		virtual string getUnit() = 0;

		/**
		*		This function returns the subclass of the unit.
		*/
		virtual string getSubClass() = 0;

		/**
		*		This function returns the skill of the unit.
		*/
		virtual string getSkill() = 0;



		/**
		*		This function is used when one unit attacks another unit.
		*		@param other is the unit that is being attacked.
		*		An int is returned from the unit that was attacked.
		*/
		virtual int attack(Unit*) = 0;

		/**
		*		This function causes a unit ot  take damage and in turn its health
		*		will decrease.
		*		@param damageGiven is the amount of damage that is inflicted on the
		*		attacked unit.
		*/
		virtual int takeDamage(int damageGiven);


		/**
		*		This function forms part of the prototype design pattern and allows
		*		a unit to be cloned.
		*		A pointer to the cloned unit is returned.
		*/
		virtual Unit* clone() = 0;


		/**
		*		This function forms part of the observer and mediator design patterns.
		*		@param game is a Master object passed to it.
		*/
		virtual void registerMaster(Master* game);
};
//static int count = 0;

#endif
