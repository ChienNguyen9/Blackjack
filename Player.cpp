#include "Player.h"

Player::Player(){
  playerValue = 0;
  cardOne = 0;
  cardTwo = 0;
}
// Automatic player gets 2 cards
int Player::DefaultPlayerCards(){
  cardOne = cards.CardsDealt();
  cardTwo = cards.CardsDealt();
  if((cardOne == 1 && cardTwo == 10) || (cardOne == 10 && cardTwo == 1)){
    return playerValue;
  }else{
    if(cardOne == 1){
      return playerValue = 11 + cardTwo;
    }else if(cardTwo == 1){
      return playerValue = cardOne + 11;
    }else{
      return playerValue = cardOne + cardTwo;
    }
  }
}

int Player::DrawCard(){
  return cards.CardsDealt();
}
