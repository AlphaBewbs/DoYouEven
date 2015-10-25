#ifndef MAP_H
#define MAP_H
class Map
{
private:
    char** MapContents;
    char* FileLocation;
    void SetMap();
    int mapSizeX;
    int mapSizeY;
public:
    ~Map();
    Map(char*);
    void printMap();

	bool availableSpace(int, int);
    bool Move(int, int, int, int);
    void setMap();

    //@CHANGED
    int getY() {return mapSizeY};
    int getX() {return mapSizeX};


};
#endif
