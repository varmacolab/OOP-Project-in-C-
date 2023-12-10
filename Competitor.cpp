#include "Competitor.h"
#include <iostream>
using namespace std;

Competitor::Competitor(const string &NAME, int HEALTH, int SHIELD)
: name(NAME), health(HEALTH), shield(SHIELD)
{
  // Nothing here
}  



string Competitor::GetName() const {
  return name;
}

int Competitor::GetHealth() const {
  return health;
}

int Competitor::GetShield() const 
{
return shield;
}

bool Competitor::IsDefeated() const 
{
return health<=0;
}