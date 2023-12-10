#include "Gorg.h"
#include<iostream>
using namespace std;

Gorg::Gorg()
    : Competitor("George", 30, 5), max_shield(5)
    {
      // Nothing here
    }  
//   string Gorg::GetName() const {
//     return name;
//   }

//   int Gorg::GetHealth() const {
//     return health;
//   }

//   int Gorg::GetShield() const 
// {
//   return shield;
// }

//   bool Gorg::IsDefeated() const 
//   {
//   return health<=0;
//   }

  void Gorg::GetsAttacked()
{
  // 0- 99
 int roll = rand() % 100;
  if(roll<15)
  {
    // 0-14(15%)
    if(++shield>max_shield)
    {
      --shield; 
    }
  }

  // roll = rand() % 100;
  // if(roll<35)
  // {
  //   // 0-34(35%)
  //   if(++shield>max_shield)
  //   {
  //     --shield;
  //   }
  // }

  roll = rand() % 100;
  if(roll<65)
  {
    // 0-64(65%)
    shield-= (1+(rand()%2));
    if(shield<0)
    {
      health-=(5+ (rand()%6));
    }
  }

}

