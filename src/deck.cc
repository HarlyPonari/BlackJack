#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include "card.h"

const int MAX_SUIT_SIZE = 4;
const int MAX_VALUE_SIZE = 13;

class Deck{
  public:
    std::vector<Card> cardStack;

    Deck(unsigned int amountOfDecks){
      unsigned int currSuit = 0;
      unsigned int currValue = 0;
      int value = 0;
      
      unsigned int& currSuit_r = currSuit;
      unsigned int& currValue_r = currValue;

      amountOfDecks *= 52 * amountOfDecks;

      //Construct each card
      for (size_t i = 0; i < amountOfDecks; i++){
        //For each suit
        for(size_t j = 0; j <= MAX_SUIT_SIZE; j++){
          //For each value
          for (size_t h = 0; h <= MAX_VALUE_SIZE; h++)
          {
            cardStack[value] = Card(currSuit_r, currValue_r);
            currValue = incrementValue(currValue_r);
            value++;
          }

          currSuit = incrementSuit(currSuit_r);
        }
      }
      //Call the shuffle function
    }
    ~Deck(){

    }

    void shuffle(){
      //Shuffle the deck
      std::random_device rd;
      std::mt19937 gen(rd());

      std::shuffle(std::begin(cardStack), std::end(cardStack), gen);
    }

    Card drawCard(){
      throw std::logic_error("Not implemented");
    }

    int cardsLeft() const{
      return cardStack.size();
    }



  private:
  int incrementSuit(unsigned int suit){
      if (suit++ == 4){
        return suit = 0;
      }else{
        return suit++;
      }
  }
  int incrementValue(unsigned int value){
    if (value++ == 14){
      return value = 0;
    }else{
      return value++;
    }
  }

  //Variables
  private:
    
    
};