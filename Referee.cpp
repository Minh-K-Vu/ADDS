#include "Referee.h"

Referee::Referee(){};

Player* Referee::refGame(Player* player1, Player* player2) {
    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();
    
    if (move1->beats(move2)) {
      std::cout << player1->getName() << " wins!\n";
      return player1;
  } else if (move2->beats(move1)) {
      std::cout << player2->getName() << " wins!\n";
      return player2;
  } else {
      std::cout << "It's a tie!\n";
      return nullptr;
  }
}
