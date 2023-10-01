#include <iostream>
#include <vector>

#include "../inc/player.h"
#include "../inc/enums.h"
#include "../inc/card.h"


Player::Player(std::string name){
  this->name = name;
  score = 0;
}

Player::~Player(){
  
  //destroy all the cards when the player is destroyed
}

void Player::hitCard(Card card){
  hand.push_back(card);
  Player::getScore();
}

int Player::getScore(){
  for(int i = 0; i < hand.size(); i++){
    score += hand[i].getValue();
  }
  return score;
}