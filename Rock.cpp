#include "Rock.h"
#include "Scissors.h"
Rock::Rock(){}
std::string Rock::getName() { return "Rock"; }
bool Rock::beats(Move* other) {
    if (other->getName() == "Scissors"){
        return true;
    } else {
      return false;
    }
}