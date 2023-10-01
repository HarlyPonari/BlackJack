#include <iostream>
#include <stack>
#include <random>
#include <algorithm>

#include "../inc/card.h"
#include "../inc/enums.h"

const int MAX_SUITS = 3;
const int MAX_VALUES = 12;


class Deck
{
  public:
    //Methods
    Deck(unsigned int deckAmount);
    ~Deck();
    Card drawCard();
    void shuffleDeck();

    std::stack<Card> deck;

  private:
    //Methods
    void incrementValue(int& currValue);
    void incrementSuit(int& curr_suit);

  private:
    //Members
    
    suit currSuit;
    value currValue;
    int curr_suit = 0;
    int curr_value = 0;
  

};
