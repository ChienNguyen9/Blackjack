#ifndef Application_h
#define Application_h
#include <iostream>
#include "Player.h"
#include "Dealer.h"
#include "Cards.h"

class Application{
public:
  Application();
  void GameRun();
  void Play();
  void ResetGame();
  void Action();
private:
  char choice;
  int instruction;
  int chips;
  int bet;
  Player player;
  int playerValueCard;
  Dealer dealer;
  int dealerValueCard;
  Cards cards;
};

#endif
