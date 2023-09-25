#ifndef DECK_H
#define DECK_H

#include <stack>
#include "card.h"

class Deck
{
  public:
    Deck(unsigned int amountOfDecks);
    void shuffle();
    Card drawCard();
    int cardsLeft() const;

  private:
    std::stack<Card> cards;
    int currentCardIndex;
};

#endif