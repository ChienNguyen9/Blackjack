#ifndef Cards_h
#define Cards_h
#include <iostream>

class Cards{
public:
  Cards();
  int CardsDealt();
  void CardsValue();
  void ResetCards();
  int LuckySuit();
  int LuckyNumber();
  int hearts[13];
  int diamonds[13];
  int spades[13];
  int clubs[13];
private:
  int randomSuit;
  int randomNumber;
  int temporaryNumber;
  int temporary;
};

#endif
