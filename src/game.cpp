#include <iostream>
#include <vector>

#include "../inc/game.h"



Game::Game(){

}

Game::~Game(){

}

void Game::initGame(){
  
  Deck* deck = new Deck();
  Player player(1000.0f);

  //TODO: randomize dealer name
  Player dealer("Dealer", 10000.0f); 
  
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


bool Game::checkAnswer(char answer){
  switch (answer)
  {
  case 'Y':
  case 'y':   
    return true;
    break;
  case 'N':
  case 'n':
    return false;
    break;

  default:
    std::cout << "Invalid answer" << std::endl;
    return checkAnswer(std::cin.get());
    break;
  }
}

//Left off here
//TODO: implement this function
bool Game::PlayAgain(){
  char answer{};
  std::cout << "Play again? (Y/N)" << std::endl;
  std::cin >> answer;
  return checkAnswer(answer);
}

