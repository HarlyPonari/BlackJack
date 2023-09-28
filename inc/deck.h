#ifndef DECK_H
#define DECK_H

#include <vector>
#include "card.h"

class Deck
{
  public:
    Deck(unsigned int amountOfDecks);
    void shuffle();
    Card drawCard();
    int cardsLeft() const;

  private:
    std::vector<Card> cards;
    int currentCardIndex;
};

#endif