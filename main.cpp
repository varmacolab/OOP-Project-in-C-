#include<ctime>
#include <iostream>
#include "Competitor.h"
#include "Boov.h"
#include "Gorg.h"
using namespace std;

int main() {
  // Different randomness every time program is executed
  srand(static_cast<unsigned>(time(0)));

  // // Get Health
  // cout<<"Enter Boov Health value";
  // int health;
  // cin>>health;

  // // Get Shield
  // cout<<"Enter Boov Shield value";
  // int shield;
  // cin>>shield;

  // Run many simulations
  const int NUMBER_OF_SIMULATIONS = 1000000;

  // Calculate the total number of rounds survived
  // int roundsSurvived = 0;
  int boovWins = 0;
  int gorgWins = 0;
  

  // Repeat many times
  for(int i=1;i<=NUMBER_OF_SIMULATIONS;i++){
    // Lets see how long a single Boov can last
    Competitor *oh = new Boov("Oh", 31,13);
    Competitor *george = new Gorg();

    // while still healthy enough to do the battle
    while((oh->IsDefeated()== false) && (george->IsDefeated()==false))
      {
        george->GetsAttacked();
        if(george->IsDefeated()==false)
        {
          oh->GetsAttacked();
        }
      }
    if(george->IsDefeated()==true)
    {
      ++boovWins;
    }
    else{
      ++gorgWins;
    }
  }

  
   double boov_pct = boovWins /static_cast<double>(NUMBER_OF_SIMULATIONS) * 100; 
  double gorg_pct = gorgWins /static_cast<double>(NUMBER_OF_SIMULATIONS) * 100; 

  cout<<"Boov: "<<boov_pct<<endl;
  cout<<"Gorg: "<<gorg_pct<<endl;

  // Gather and report final statistics
  // cout<<"Average number of rounds until defeated: ";
  // double average = roundsSurvived/ static_cast<double>(NUMBER_OF_SIMULATIONS);
  // cout<<average<<endl;

  // system("PAUSE");
  return 0;
}