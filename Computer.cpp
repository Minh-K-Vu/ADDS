#include "Computer.h"
#include "Rock.h"
#include "Robot.h"
Computer::Computer() {}

Move* Computer::makeMove() {
    return new Rock();
}

string Computer::getName() {
    return "Computer";
}
