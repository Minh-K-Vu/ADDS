#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human human("Minh");
    Computer bot;

    Referee ref;
    Player* winner = ref.refGame(&human, &bot);

    if (winner) {
        std::cout << "Winner: " << winner->getName() << std::endl;
    } else {
        std::cout << "No winner, it's a draw.\n";
    }

    return 0;
}
