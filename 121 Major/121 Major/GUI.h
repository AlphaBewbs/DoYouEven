/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#ifndef GUI_H
#define GUI_H

#include <gtkmm.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include "Master.h"
using namespace std;

class GUI
{
	private:
		Master* master;

    Gtk::Window* pWindow = 0;
    Gtk::Grid* pGrid = 0;
    Gtk::Button* pGo = 0;
    Gtk::Image* pSprite[10][10];

	public:
		/*
		Builds the general user interface using the gtkmm library and a .glade fill that is stored in the same
		directory. The function calls the updateMap function to set the 100 images that make up the map.
		*/
		GUI(int argc, char **argv);
		/*
		Dealocates the memory used to store the gtkmm variables used to build the user interface.
		*/
		~GUI()
			{
				for (int i = 0; i < 10; ++i)
					for (int j = 0; j < 10; ++j)
						delete pSprite[i][j];

				delete pGo;
				delete pGrid;
				delete pWindow;
			}
		/*
		Updates all pSprite images to match the map stored in the GameMaster giving a more visual representation of the
		map to the user.
		*/
		void updateMap();
		void turn();
		void startGame();

};

#endif
