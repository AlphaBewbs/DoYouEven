#include "Map.h"
#include "Unit.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

Map::Map(char* fileName)
{
    FileLocation = fileName;
    mapSizeX = 20;
    mapSizeY = 21;
    setMap();
}

Map::~Map()
{
  //@CHANGED
	for (size_t i = 0; i < mapSizeY; i++)
		delete MapContents[i];

	delete [] MapContents;

}

void Map::setMap()
{
    MapContents = new char*[mapSizeX];
    for(int i=0;i<mapSizeX;i++)
    {
        MapContents[i] = new char[mapSizeY];
    }
    ifstream myReadFile;
    myReadFile.open(FileLocation);
    string output;
    int count = 0;
    if (myReadFile.is_open())
    {
        while (getline(myReadFile, output))
        {
            strcpy(MapContents[count], output.c_str());
            count++;
        }
    }
    myReadFile.close();
}

void Map::printMap()
{
    for(int i = 0; i < mapSizeX;i++)
    {
        cout << MapContents[i] << endl;
    }
}

bool Map::Move(int x, int y, int prevX, int prevY)
{
	if(y > mapSizeY)
	{
		std::cout << "66" << std::endl;
		return false;
	}
	else if(x > mapSizeX)
	{
		std::cout << "68" << std::endl;
		return false;
	}



	if(MapContents[x][y] == ' ')
	{
		std::cout << "87" << std::endl;
		return true;
	}
	else
	{
		std::cout << "92" << std::endl;
		return false;
	}
}

bool Map::availableSpace(int x, int y)
{
	if(y > mapSizeY)
	  return false;
	else if (x > mapSizeX)
	  return false;

	if(MapContents[x][y] == ' ')
	  return true;
	else
	  return false;
}

void Map::addUnit(char unit, int x, int y)
{
	MapContents[x][y] = unit;
}
