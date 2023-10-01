#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

#include "../inc/enums.h"
#include "../inc/deck.h"



Deck::Deck()
{
  //refrences to the private members
  int& suitRef = curr_suit;
  int& valueRef = curr_value;

  //Creates a 52 stack of cards
  //TODO: Must repeat this process foreach deck in amount of decks.
  //in order to create more decks, create a for loop outside of this class of type Deck*
  for(int i = 0; i <= MAX_SUITS; i++){
    for(int j = 0; j <= MAX_VALUES; j++){
      deck.insert(deck.begin(), Card(suitRef,valueRef));
      incrementValue(valueRef);
    }
    incrementSuit(suitRef);
  }
}

Deck::~Deck()
{
  for (int i = 0; i < deck.size(); i++){
    deck.pop_back();
  }
  std::cout << "Deck destroyed" << std::endl;
}

void Deck::Shuffle(){
  std::random_shuffle(deck.begin(), deck.end());
}

Card Deck::drawCard(){
  Card card = deck.front();
  deck.pop_back();
  return card;
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