#ifndef DECK_HPP
#define DECK_HPP

#include <vector>
#include "card.hpp"

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