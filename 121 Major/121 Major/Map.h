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
		Map() {};
		~Map();
		Map(char*);
		void printMap();

		bool availableSpace(int, int);
		bool Move(int, int, int, int);
		void setMap();

		//@CHANGED
		unsigned int getY() { return mapSizeY; };
		unsigned int getX() { return mapSizeX; };


};
#endif
