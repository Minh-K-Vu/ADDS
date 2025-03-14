#include "Computer.h"
#include "Rock.h"
#include "Robot.h"
Computer::Computer() {}

Move* Computer::makeMove() {
    return new Robot();
}

string Computer::getName() {
    return "Computer";
}
