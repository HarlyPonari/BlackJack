#include <iostream>
#include <stack>
#include <random>
#include <algorithm>

#include "../inc/enums.h"
#include "../inc/deck.h"



Deck::Deck(unsigned int amountDecks)
{
  //refrences to the private members
  int& suitRef = curr_suit;
  int& valueRef = curr_value;

  for(int i = 0; i <= MAX_SUITS * amountDecks; i++){
    for(int j = 0; j <= MAX_VALUES * amountDecks; j++){
      deck.push(Card(suitRef, valueRef));
      incrementValue(valueRef);
    }
    incrementSuit(suitRef);
  }
}

Deck::~Deck()
{
  for (int i = 0; i < deck.size(); i++){
    deck.pop();
  }

  std::cout << "Deck destroyed" << std::endl;
}

void Deck::incrementSuit(int& currSuit){
  if (currSuit == MAX_SUITS){
    currSuit = 0;
  }
  else{
    currSuit++;
  }
}

void Deck::incrementValue(int& currValue){
  if (currValue == MAX_VALUES){
    currValue = 0;
  }
  else{
    currValue++;
  }
}