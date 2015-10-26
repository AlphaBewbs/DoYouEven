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
*		@file GameInterface.h
*		@class GameInterface
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that stores units of the Bludgeoning type.
*
*		@section Description
*		This class provides the functionality of attacking a party.
*
*/
#ifndef GAMEINTERFACE_H
#define GAMEINTERFACE_H

#include "UnitFactory.h"
#include "Master.h"
#include "Unit.h"

class GameInterface
{
	private:
		/**
		*		The private member variables that form part of the abstract factory
		*		design pattern to create Units of either Monster or Player.
		*/
		PlayerFactory playerFactory;
		MonsterFactory monsterFactory;


		/*@NOTE DONT NEED THIS ANYMORE
		int playerSize, monsterSize;

		Unit** playerUnits = new Unit*[playerSize];
		Unit** monsterUnits = new Unit*[monsterSize];*/

		//@NOTE new
		Master master;

	public:
		/**
		*		The constructor that creats a dynamic array for storing all of the units.
		*/
		GameInterface();

		/**
		*		The destructor to de-allocate memory.
		*/
		~GameInterface();

		/**
		*		@TODO implement startGame function
		*/
		void startGame();

		/**
		*		@TODO implememnt the move funtion
		*/
		void moveMonsters();


		/**
		*		This function allows the user to choose the kind of unit they want
		* 	their hero to be.
		*/
		void chooseHero();

		/**
		*		This function allows the user to choose the amount of monsters that
		* 	they want.
		*/
		void createMonsters();

		void print();


};

#endif
