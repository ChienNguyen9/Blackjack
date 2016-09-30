#include "Dealer.h"

Dealer::Dealer(){
  dealerValue = 0;
  cardOne = 0;
  cardTwo = 0;
}

int Dealer::DefaultDealerCards(){
  cardOne = cards.CardsDealt();
  cardTwo = cards.CardsDealt();
  if((cardOne == 1 && cardTwo == 10) || (cardOne == 10 && cardTwo == 1)){
    return dealerValue;
  }else{
    if(cardOne == 1){
      return dealerValue = 11 + cardTwo;
    }else if(cardTwo == 1){
      return dealerValue = cardTwo + 11;
    }else{
      return dealerValue = cardOne + cardTwo;
    }
  }
}
