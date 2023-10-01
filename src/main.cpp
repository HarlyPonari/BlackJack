#include <iostream>

#include "../inc/deck.h"


int main (){

  //Creates a deck of 52 cards
  Deck* deck = new Deck();

  std::cout << deck->deck.size() << std::endl;
  return 0;
}  