/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
/*
Adapter and chain are one
*/

#ifndef ADAPTER_H
#define ADAPTER_H

#include "Party.h"
#include "Overlord.h"

class Adapter : public Overlord
{
  public:
    void attack(vector<Unit*>, vector<Unit*>);

  private:
    Party party;
};

#endif
