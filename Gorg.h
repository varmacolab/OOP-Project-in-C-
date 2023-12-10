#pragma once   
// include guards: It will not compile more than once
#include "Competitor.h"
#include <string>
using namespace std;

class Gorg: public Competitor
{
private:
  // string name;
  // int health;
  // int shield;
  int max_shield;

public:

  Gorg();
  virtual void GetsAttacked() override;

  // string GetName() const;
  // int GetHealth() const;
  // int GetShield() const;

  // bool IsDefeated() const;

  // void GetsAttacked();

};