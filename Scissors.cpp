#include "Scissors.h"
#include "Paper.h"
Scissors::Scissors(){}
std::string Scissors::getName() { return "Scissors"; }
bool Scissors::beats(Move* other) {
    if (other->getName() == "Paper"){
        return true;
    } else {
      return false;
    }
}