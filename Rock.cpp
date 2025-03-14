#include "Rock.h"
#include "Scissors.h"
Rock::Rock(std::string name) : name(name){}
std::string Rock::getName() { return name; }
bool Rock::beats(Move* other) {
    if (other->getName() == "Scissors"){
        return true;
    } else {
      return false;
    }
}