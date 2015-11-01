/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#include "GUI.h"
#include "GameInterface.h"

GUI::GUI(int argc, char **argv)
{
	auto app = Gtk::Application::create(argc, argv, "BattleGround");
	master = new Master;

	//Load the GtkBuilder file and instantiate its widgets:
	auto refBuilder = Gtk::Builder::create();

	try
	{
		refBuilder->add_from_file("gui.glade");
	}
	catch(const Glib::FileError& ex)
	{
		cout << "FileError: " << ex.what() << endl;
		exit(1);
	}
	catch(const Glib::MarkupError& ex)
	{
		cout << "MarkupError: " << ex.what() << endl;
		exit(1);
	}
	catch(const Gtk::BuilderError& ex)
	{
		cout << "BuilderError: " << ex.what() << endl;
		exit(1);
	}

	//Get the GtkBuilder-instantiated Dialog:
	refBuilder->get_widget("applicationwindow1", pWindow);
	if(pWindow)
	{
		refBuilder->get_widget("grid1", pGrid);
		int imageCount = 0;

		for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				++imageCount;
				string imageName = "image";
				imageName.append(to_string(imageCount));

				refBuilder->get_widget(imageName, pSprite[i][j]);
			}
		}
		refBuilder->get_widget("makeMove", pGo);
		pGo->signal_clicked().connect( sigc::mem_fun(this, &GUI::turn) );

		GameInterface gi(master);

		gi.chooseHero();
		gi.createMonsters();
		this->updateMap();

		app->run(*pWindow);
	}
}

void GUI::updateMap()
{
	for (int i = 0; i < 10; ++i)
		{
			for (int j = 0; j < 10; ++j)
			{
				char sprite = master->getSpace(i, j);

				switch (sprite) {
					case ' ' : pSprite[i][j]->set("grass.png");
							break;
					case '*' : pSprite[i][j]->set("bolder.png");
							break;
					case 'H' : pSprite[i][j]->set("squad.png");
							break;
					case 'M' : pSprite[i][j]->set("monster.png");
							break;
				}
			}
		}
}

void  GUI::startGame()
{

	master->moveMonsters();
	this->updateMap();

	cout << "hello" << endl;

	/*master->moveHero();
	this->updateMap();*/
}

void GUI::turn()
{
	master->moveHero();
	this->updateMap();

	master->moveMonsters();
	this->updateMap();
}
