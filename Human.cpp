#include "Human.h"

Human::Human(string name) : name(name) {}

char Human::makeMove() {
    char move;
    cout << "Enter move: ";
    cin >> move;
    return move;
}

string Human::getName() {
    return name;
}