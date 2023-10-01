#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>

#include "../inc/card.h"

class Player{
public:
  Player(std::string name);
  ~Player();
  int getScore();
  void hitCard(Card card);

private:
  std::string name;
  std::vector<Card> hand;
  int score;
};

#endif