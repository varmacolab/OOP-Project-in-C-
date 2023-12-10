#include "Boov.h"
#include<iostream>
using namespace std;

Boov::Boov(const string &NAME, int HEALTH, int SHIELD)
    : Competitor(NAME, HEALTH, SHIELD)
    {
      // Nothing here
    }  
//   string Boov::GetName() const {
//     return name;
//   }

//   int Boov::GetHealth() const {
//     return health;
//   }

//   int Boov::GetShield() const 
// {
//   return shield;
// }

//   bool Boov::IsDefeated() const 
//   {
//   return health<=0;
//   }

  void Boov::GetsAttacked()
{
  // 0-99
  int roll =  rand() % 100;
  if(roll==0)
  {
    // 0 (1%)
    health=0;
  }
  else if(roll<=50)
  {
    // 1 -50 (50%)
    shield-= (2+(rand()%4));
    if(shield<0)
    {
      health+=shield;
      shield=0;
    }
  }
  else if(roll<=79)
  {
    // 51-79 (29%)
    health-=(4+(rand()%5));
    
  }
  
}

