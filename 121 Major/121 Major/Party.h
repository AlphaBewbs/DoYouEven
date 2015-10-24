/********************************************
121 Project 2015
Group: PokemonTrainers

MEMBERS
Name: Kyle Erwin
Student Number: 15015302

Name: Ritesh Doolabh
Student Number: 15075754

********************************************/
//CHAIN

#ifndef PARTY_H
#define PARTY_H

#include "Unit.h"

class Party
{
  protected:
    Party* next;
    Unit* unit;

  public:
    Party() : next(0){};

    void add(Unit* newUnit)
    {
      if (next)
        next->add(newUnit);
      else
        unit = newUnit;
    };

    virtual void attack(int ){};
};
#endif
