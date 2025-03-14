#include "Paper.h"
#include "Rock.h"
Paper::Paper(){}
std::string Paper::getName() { return "Paper"; }
bool Paper::beats(Move* other) {
    if (other->getName() == "Rock"){
        return true;
    } else {
      return false;
    }
}