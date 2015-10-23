#include "Map.h"
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
  /**
   * @TODO Fill in Destructor here
   */   
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


