#ifndef Cards_h
#define Cards_h
#include <iostream>

class Cards{
public:
  Cards();
  int CardsDealt();
  void CardsValue();
private:
  int hearts[13];
  int diamonds[13];
  int spades[13];
  int clubs[13];
  int deck[52];
};

#endif
