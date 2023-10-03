#include <iostream>
#include <vector>

#include "../inc/game.h"



Game::Game(){

}

Game::~Game(){

}

void Game::initGame(){
  
  Deck* deck = new Deck();
  Player player(std::string name);
  Player dealer("Dealer", 10000.0f); //TODO: randomize dealer name

  switch (dealerHand.size())
  {
  case 0:
    dealerHand.push_back(deck->drawCard());
    for (size_t i = 0; i < players.size(); i++)
    {
      //deal one card to each player
      players[i].hitCard(deck->drawCard());
    }
    break;
  case 1:
    dealerHand.push_back(deck->drawCard());
    for (size_t i = 0; i < players.size(); i++)
    {
      //deal one card to each player
      players[i].hitCard(deck->drawCard());
    }
    break;
  
  default:
    std::cout << "Error" << std::endl;
    break;
  }

}

bool Game::NextRound(){
  bool playAgain = false;
  //TODO: check if player wants to play again
  //TODO: check if player has enough money to play again
  while (!playAgain)
  {
    for(auto player : players){
      if (player.getMoney() < 10.0f)
      {
        std::cout << 
        "You don't have enough money to play again" << std::endl;
        return false;
      }else{
        std::cin >> playAgain;
      }
    }
  }
  
  

  return true;
}



//Left off here
//TODO: implement this function
bool Game::PlayAgain(){
  std::cout << "Do you want to play again? (y/n)" << std::endl;
  char answer;

  std::cin >> answer;
  

  
}

