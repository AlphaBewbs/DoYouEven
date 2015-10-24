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

#ifndef CONCRETEPARTY_H
#define CONCRETEPARTY_H

class ConcreteParty : public Party
{
  public:
    ConcreteDispenser() : Party(){};

    void attack(int dmg)
    {
      Party* head = this;
      while(head)
      {
        if (unit.takeDamage(dmg) > 0)
        {
          head = head->next;
        }
      }
    }
};

#endif
