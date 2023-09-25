#include <iostream>

enum value 
{
  ace, 
  two, 
  three, 
  four, 
  five, 
  six, 
  seven, 
  eight, 
  nine, 
  ten, 
  jack, 
  queen, 
  king
};

enum suit 
{ 
  spades, 
  hearts, 
  diamonds, 
  clubs
};


class Card
{

  public:
    suit cardSuit;
    value cardValue;

    Card(int currSuit, int currValue){
      this->cardSuit = static_cast<suit>(currSuit);
      this->cardValue = static_cast<value>(currValue);
    }
    
    ~Card(){

    }


    

    value getValue() const{
      return ace;
    }

  private:
    
};