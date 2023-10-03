#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

#include "../inc/player.h"
#include "../inc/enums.h"
#include "../inc/card.h"
#include "../inc/deck.h"

class Game{
public:
  Game();
  ~Game();
  void initGame();
  bool NextRound();
  bool GameOver();
  bool PlayAgain();


private:
  void checkAnswer(char answer); 

  std::vector<Card> dealerHand;
  Card* dealerHandPtr;

  std::vector<Player> players;

private:
  
};
#endif