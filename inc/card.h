#ifndef CARD_H
#define CARD_H

#include <iostream>
#include "../inc/enums.h"



class Card{
public:
  //Public Methods
  Card(int currSuit, int currValue);
  ~Card();
  suit getSuit() const;
  value getValue() const;

public:
  //Public Members
  const int MAX_SUITS = 3;
  const int MAX_VALUES = 12;

private:
  //Private Members
  suit currSuit;
  value currValue;
};


#endif
