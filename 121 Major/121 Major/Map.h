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
*		@file Map.h
*		@class Map
*		@author Kyle Erwin and Ritesh Doolabh
*		@version 1.8.10
*
*		@brief This is a class that allows for the reading of the map and enterring
*		all of its elements into an array.
*
*		@section Description
*		This class acts as the concrete collegue in the mediator design pattern.
*		It allows us to use all theelements on the map.
*
*/
#ifndef MAP_H
#define MAP_H

class Map
{
	private:
		/**
		*	This variable is a 2D array that will contain all the map contents.
		**/
		char** MapContents;

		/**
		*	this variable is a char variable that contains the file location.
		**/
		char* FileLocation;

		/**
		*	This function allows us to place symbols in the map.
		**/
		void SetMap();

		/**
		*	This variable allows us to set the X-Size of the map.
		**/
		int mapSizeX;

		/**
		*	This variable allows us to set the Y-Size of the map.
		**/
		int mapSizeY;
	public:
		/**
		*	This is the default constructor for the map.
		**/
		Map() {};

		/**
		*	The destructor for the map deletes all the memory.
		**/
		~Map();

		/**
		*	This function allows us to initialise the map array.
		* @param char* is the variable we want to lpace in the map.
		**/
		Map(char*);

		/**
		*	This function prints the map.
		**/
		void printMap();

		/**
		*	This function returns a true or false value depending if the space is free.
		*	@param int is the x-coordinate.
		*	@param int is the Y-coordinate.
		**/
		bool availableSpace(int, int);

		/**
		*	This function moves a symbol on the map.
		* @param int is the previous X-coordinate.
		* @param int is the previous Y-coordinate.
		* @param int is the new X-coordinate.
		* @param int is the new Y-coordinate.
		**/
		bool Move(int, int, int, int);

		/**
		*	This function sets the map up.
		**/
		void setMap();

		/**
		*	This function sets a symbol at a given coordinate.
		* @param char is the symbol to be set.
		* @param int is the X-coordinate to set it to.
		* @param int is the Y-coordinate to set it to.
		**/
		void addUnit(char, int, int);

		//@CHANGED
		/**
		*	This function returns the Y-size of the map.
		**/
		unsigned int getY() { return mapSizeY; };

		/**
		*	This function returns the X-size of the map.
		**/
		unsigned int getX() { return mapSizeX; };

		/**
		*	This function returns the character at a given index on the map.
		* @param int x is the X-coordinate.
		* @param int y is the Y-coordinate.
		**/
		char getSpace(int x, int y) { return MapContents[x][y]; };

};
#endif
