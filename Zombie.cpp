#include "Zombie.h"
#include "Pirate.h"
#include "Monkey.h"
Zombie::Zombie(std::string name) : name(name){}
std::string Zombie::getName() { return name; }
bool Zombie::beats(Move* other) {
    if (other->getName() == "Pirate" || other->getName() == "Monkey"){
        return true;
    } else {
      return false;
    }
};