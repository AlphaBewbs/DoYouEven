/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/

#include "Adapter.h"

void Adapter::attack(vector<Unit*> units, int dmg)
{
  for(int i = 0; i < units.size(); ++i)
    party.add(units[i]);

  party.attack(dmg);
}
