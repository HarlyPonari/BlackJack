#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <vector>

#include "../inc/card.h"

class Player{
public:
  Player(float money);
  Player(std::string name, float money);
  ~Player();
  int getScore();
  void hitCard(Card card);
  float getMoney();
  void addMoney(float money);

private:
  std::string name;
  std::vector<Card> hand;
  int handValue;

  float money{1000.0f};
};

#endif