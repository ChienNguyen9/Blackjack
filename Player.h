#ifndef Player_h
#define Player_h
#include <iostream>
#include "Cards.h"

class Player{
public:
  Player();
  int DefaultPlayerCards();
  int DrawCard();
private:
  int cardOne;
  int cardTwo;
  int playerValue;
  Cards cards;
};

#endif
