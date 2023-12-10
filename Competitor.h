# pragma once

#include<string>
using namespace std;


class Competitor{
protected:
  string name;
  int health;
  int shield;

public:
  Competitor(const string &NAME, int HEALTH, int SHIELD);
  
  string GetName() const;
  int GetHealth() const;
  int GetShield() const;

  bool IsDefeated() const;

  virtual void GetsAttacked() = 0;

};