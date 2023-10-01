#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

#include "../inc/card.h"
#include "../inc/enums.h"




class Deck
{
public:
   //Methods
  Deck();
  ~Deck();
  Card drawCard();
  void Shuffle();

  std::vector<Card> deck;

private:
  //Methods
  void incrementValue(int& currValue);
  void incrementSuit(int& curr_suit);

private:
  //Members
  int curr_suit = 0;
  int curr_value = 0;
  

};
