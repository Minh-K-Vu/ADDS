#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>
#include <string>

int main() {
    Human human("Minh");
    Computer computer;
    Referee referee;

    Player* winner = referee.refGame(&human, &computer);
    
    if (winner) {
        cout << winner->getName() << " Wins." << endl;
    } else {
        cout << "It's a Tie." << endl;
    }
    
    return 0;
}
