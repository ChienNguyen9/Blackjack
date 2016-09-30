#include "Cards.h"
#include <ctime>
#include <cstdlib>

// give cards values
Cards::Cards(){
  randomSuit = 1;
  randomNumber = 1;
  temporary = 0;
  temporaryNumber = 0;
  for(int i = 0; i < 13; i++){
    if(i > 9){
      hearts[i] = 10;
    }else{
      hearts[i] = i+1;
    }
  }
  for(int i = 0; i < 13; i++){
    if(i > 9){
      diamonds[i] = 10;
    }else{
      diamonds[i] = i+1;
    }
  }
  for(int i = 0; i < 13; i++){
    if(i > 9){
      spades[i] = 10;
    }else{
      spades[i] = i+1;
    }
  }
  for(int i = 0; i < 13; i++){
    if(i > 9){
      clubs[i] = 10;
    }else{
      clubs[i] = i+1;
    }
  }
}
// returns random cards and cards cannot be the same
int Cards::CardsDealt(){
  temporaryNumber = LuckyNumber();
  switch(LuckySuit()){
    // hearts
    case 1:
      if(hearts[temporaryNumber] == 0){
        CardsDealt();
      }
      temporary = hearts[temporaryNumber];
      hearts[temporaryNumber] = 0;
      return temporary;
      break;
    // diamonds
    case 2:
      if(diamonds[temporaryNumber] == 0){
        CardsDealt();
      }
      temporary = diamonds[temporaryNumber];
      diamonds[temporaryNumber] = 0;
      return temporary;
      break;
    // spades
    case 3:
      if(spades[temporaryNumber] == 0){
        CardsDealt();
      }
      temporary = spades[temporaryNumber];
      spades[temporaryNumber] = 0;
      return temporary;
      break;
    // clubs
    case 4:
      if(clubs[temporaryNumber] == 0){
        CardsDealt();
      }
      temporary = clubs[temporaryNumber];
      clubs[temporaryNumber] = 0;
      return temporary;
      break;
    // something went wrong
    default:
      std::cout << "Card is missing!!!";
      return 0;
      break;
  }
}
// tests if cards has actual value
void Cards::CardsValue(){
  for(int i = 0; i < 13; i++){
    std::cout << hearts[i] << "-hearts ";
    std::cout << diamonds[i] << "-diamonds ";
    std::cout << spades[i] << "-spades ";
    std::cout << clubs[i] << "-clubs\n";
  }
}

void Cards::ResetCards(){
  for(int i = 0; i < 13; i++){
    if(i > 9){
      hearts[i] = 10;
    }else{
      hearts[i] = i+1;
    }
  }
  for(int i = 0; i < 13; i++){
    if(i > 9){
      diamonds[i] = 10;
    }else{
      diamonds[i] = i+1;
    }
  }
  for(int i = 0; i < 13; i++){
    if(i > 9){
      spades[i] = 10;
    }else{
      spades[i] = i+1;
    }
  }
  for(int i = 0; i < 13; i++){
    if(i > 9){
      clubs[i] = 10;
    }else{
      clubs[i] = i+1;
    }
  }
}
// generate random Suit
int Cards::LuckySuit(){
  randomSuit = rand()%4+1;
  return randomSuit;
}
// generate random cards
int Cards::LuckyNumber(){
  randomNumber = rand()%13;
  return randomNumber;
}
