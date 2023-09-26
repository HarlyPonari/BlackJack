#ifndef CARD_HPP
#define CARD_HPP

enum suit { spades, hearts, diamonds, clubs };
enum value { ace, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king };

class Card{
  public:
    Card(int currSuit, int currValue);
    suit getSuit() const;
    value getValue() const;

  private:
    suit cardSuit;
    value cardValue;
};

#endif