#include "Scissors.h"
#include "Paper.h"
Scissors::Scissors(std::string name) : name(name){}
std::string Scissors::getName() { return name; }
bool Scissors::beats(Move* other) {
    if (other->getName() == "Paper"){
        return true;
    } else {
      return false;
    }
}