#include <iostream>


#include "../inc/enums.h"
#include "../inc/card.h"

Card::Card(int currSuit, int currValue)
{
  this->currSuit = (suit)currSuit;
  this->currValue = (value)currValue;
  std::cout << "Suit: " << getSuit() << std::endl 
            << "Value:" << getValue() << std::endl;
}

Card::~Card()
{
  std::cout << "Card destroyed" << std::endl;
}

suit Card::getSuit() const{
  return this->currSuit;
}

value Card::getValue() const{
  return this->currValue;
}
