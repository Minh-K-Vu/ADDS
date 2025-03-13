#include "Rock.h"
#include "Scissors.h"

bool Rock::beats(Move* other) {
    if (other->getName() == "Scissors"){
        return true;
    } else {
      return false;
    }
}