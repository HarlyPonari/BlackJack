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

