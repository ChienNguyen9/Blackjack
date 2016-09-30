#ifndef Dealer_h
#define Dealer_h
#include <iostream>
#include "Cards.h"

class Dealer{
public:
  Dealer();
  int DefaultDealerCards();
private:
  int cardOne;
  int cardTwo;
  int dealerValue;
  Cards cards;
};

#endif
