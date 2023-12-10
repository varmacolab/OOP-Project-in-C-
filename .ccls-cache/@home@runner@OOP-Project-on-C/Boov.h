#pragma once   
// include guards: It will not compile more than once
#include "Competitor.h"
#include <string>
using namespace std;

class Boov: public Competitor
{
// private:
//   string name;
//   int health;
//   int shield;
  
public:

  Boov(const string &NAME, int HEALTH, int SHIELD);
  virtual void GetsAttacked() override;

  // string GetName() const;
  // int GetHealth() const;
  // int GetShield() const;

  // bool IsDefeated() const;

  // void GetsAttacked();

};