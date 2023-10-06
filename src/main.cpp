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
  
  /*
    The while loop shouldnt reach the end.
    It instead continue to the next iteration by a win condition, 
    player bust or player blackjack 
  */
  while(game->PlayAgain()){
    
    //TODO: check if player has enough money to play first
    for (Player player : game->players)
    {
      if (player.getMoney() <= 0.0f)
      {
        std::cout << "You dont have enough money to play" << std::endl;
        break;

      }else{ //Prompt the player's input
        bool answer = false;
        std::cout << "Do you want to play? (Y/N)" << std::endl;
        std::cin >> answer;
        if (game->checkAnswer(answer)){
          std::cout << "we made it" << std::endl;
          break;
        }else{
          std::cout << "Goodbye" << std::endl;
          break;
        }
      }
    }
  }
  
  delete game;

  return 0;
}  