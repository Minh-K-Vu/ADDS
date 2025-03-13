#include "Paper.h"
#include "Rock.h"
bool Paper::beats(Move* other) {
    if (other->getName() == "Rock"){
        return true;
    } else {
      return false;
    }
}