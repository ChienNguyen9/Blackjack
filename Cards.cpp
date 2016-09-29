#include <ctime>
#include <cstdlib>
#include "Cards.h"

// give cards values
Cards::Cards(){
  randomSuit = 1;
  randomNumber = 1;
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
  randomSuit = rand()%4+1;
  randomNumber = rand()%12;
  switch(randomSuit){
    // hearts
    case 1:
      return hearts[randomNumber];
      break;
    // diamonds
    case 2:
      return diamonds[randomNumber];
      break;
    // spades
    case 3:
      return spades[randomNumber];
      break;
    // clubs
    case 4:
      return clubs[randomNumber];
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
