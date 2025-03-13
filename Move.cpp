#include "Monkey.h"
#include "Paper.h"
bool Monkey::beats(Move* other) {
    if (other->getName() == "Ninja" || other->getName() == "Robot"){
        return true;
    } else {
      return false;
    }
}