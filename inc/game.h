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
  //functions
  Game();
  ~Game();
  void initGame();
  bool NextRound();
  bool GameOver();
  bool PlayAgain();
  bool checkAnswer(char answer); 

  
  //variables
  std::vector<Player> players;
  Deck* deck;

private:
  

  std::vector<Card> dealerHand;
  Card* dealerHandPtr;

  

private:
  
};
#endif