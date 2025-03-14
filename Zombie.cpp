#include "Zombie.h"
#include "Pirate.h"
#include "Monkey.h"
Zombie::Zombie(){}
std::string Zombie::getName() { return "Zombie"; }
bool Zombie::beats(Move* other) {
    if (other->getName() == "Pirate" || other->getName() == "Monkey"){
        return true;
    } else {
      return false;
    }
};