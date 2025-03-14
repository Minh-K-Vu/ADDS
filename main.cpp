#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    Human human("Minh");
    Computer bot;
    Referee ref;
    Player* winner = ref.refGame(&human, &bot);
    return 0;
}
