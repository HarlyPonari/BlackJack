#include <iostream>
#include <vector>

#include "../inc/player.h"
#include "../inc/enums.h"
#include "../inc/card.h"


Player::Player(std::string name, float money){
  this->name = name;
  this->money = money;
  handValue = 0;
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
    handValue += hand[i].getValue();
  }
  return handValue;
}

float Player::getMoney(){
  return money;
}

void Player::addMoney(float money){
  this->money += money;
}

