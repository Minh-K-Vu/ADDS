#include "Ninja.h"
#include "Pirate.h"
#include "Zombie.h"
#include "string"

Ninja::Ninja(){}

std::string Ninja::getName() { return "Ninja"; }

bool Ninja::beats(Move* other) {
    if (other->getName() == "Pirate" || other->getName() == "Zombie"){
        return true;
    } else {
      return false;
    }
}