#include <iostream>

#include "../inc/game.h"


int main (){
  std::string playerName;

  std::cout << "Welcome to Blackjack!" << std::endl;
  std::cout << "Enter a name to start" << std::endl;
  std::cin >> playerName;

  Game* game = new Game();

  Player player1(playerName, 1000.0f);
  
  game->initGame();
  
  while(game->PlayAgain()){

  }
  delete game;

  return 0;
}  