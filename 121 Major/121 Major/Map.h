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

    bool Move(int, int, int, int);
    void setMap();


};
#endif
