#include "Application.h"
#include <string>

Application::Application(){
  playerValueCard = 0;
  dealerValueCard = 0;
  instruction = 0;
  chips = 1000;
  bet = 0;
  std::cout << "Let's Play Blackjack!\n\n";
}

void Application::Play(){
  GameRun();
}

// run the acctual game of blackjack
void Application::GameRun(){
  std::cout << "Do you want to play Blackjack? (y/n)";
  std::cin >> choice;
  if(choice == 'n' || choice == 'N'){
    std::cout << "Bye bye!\n";
  }
  playerValueCard = player.DefaultPlayerCards();
  dealerValueCard += dealer.AutoDraw(dealer.DefaultDealerCards());

  while(choice == 'y' || choice == 'Y'){
    std::cout << "Chips left: " << chips << "\n";
    std::cout << "How much do you want to bet? ";
    std::cin >> bet;
    if(bet > chips || bet < 0){
      std::cout << "Your bet is invalid. ";
      std::cout << "Bet this turn will be 0.\n";
    }
    if((playerValueCard == 11) && (dealerValueCard == 11)){
      std::cout << "Player and Dealer has BLACKJACK!!!\n";
      std::cout << "Tie Game!\n";
      ResetGame();
    }else{
      Action();
    }
    if(chips <= 0){
      std::cout << "No chips left to play.\n";
      exit(1);
    }
  }
}
// Reset the game
void Application::ResetGame(){
  std::cout << "Play again? (y/n)";
  std::cin >> choice;
  std::cout << std::string(100, '\n') << "\n";
  if(choice == 'y' || choice == 'Y'){
    cards.ResetCards();
    playerValueCard = 0;
    dealerValueCard = 0;
    playerValueCard = player.DefaultPlayerCards();
    dealerValueCard += dealer.AutoDraw(dealer.DefaultDealerCards());
  }else{
    std::cout << "Bye bye! \n\n\n";
  }
}
// Cards dealt
void Application::Action(){
  std::cout << "Player: " << playerValueCard << "\n";
  std::cout << "1. Hit\n";
  std::cout << "2. Stand\n";
  std::cout << "3. Chips\n";
  std::cin >> instruction;
  switch(instruction){
    // Hit - draw card
    case 1:
      playerValueCard += cards.CardsDealt();
      if(playerValueCard > 21){
        std::cout << "Player: " << playerValueCard << "\n";
        std::cout << "Dealer: " << dealerValueCard << "\n";
        std::cout << "BUSTED!   Dealer WINS...\n";
        chips -= bet;
        ResetGame();
      }
      break;
    // Stand - show result
    case 2:
      if(playerValueCard == dealerValueCard){
        std::cout << "Tied Game!\n";
        ResetGame();
      }else if(dealerValueCard > 21){
        std::cout << "Player: " << playerValueCard << "\n";
        std::cout << "Dealer: " << dealerValueCard << "\n";
        std::cout << "Dealer BUSTED!   Player WINS...\n";
        chips += bet;
        ResetGame();
      }else if(playerValueCard > dealerValueCard){
        std::cout << "Player: " << playerValueCard << "\n";
        std::cout << "Dealer: " << dealerValueCard << "\n";
        std::cout << "Player wins!\n";
        std::cout << "Bet more and win BIG!\n";
        chips += bet;
        ResetGame();
      }else{
        std::cout << "Player: " << playerValueCard << "\n";
        std::cout << "Dealer: " << dealerValueCard << "\n";
        std::cout << "Dealer wins!\n";
        std::cout << "Goodluck next time!\n";
        chips -= bet;
        ResetGame();
      }
      break;
    case 3:
      std::cout << "Chips left: " << chips << "\n";
      Action();
      break;
    // invalid number
    default:
      std::cout << "Invalid number! \n\n";
      break;
  }
}
