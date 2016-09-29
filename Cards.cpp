#include <ctime>
#include <cstdlib>
#include "Cards.h"

// give cards values
Cards::Cards(){
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
// returns random cards
int Cards::CardsDealt(){

  return 0;
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
