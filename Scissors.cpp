#include "Scissors.h"
#include "Paper.h"
bool Scissors::beats(Move* other) {
    if (other->getName() == "Paper"){
        return true;
    } else {
      return false;
    }
}