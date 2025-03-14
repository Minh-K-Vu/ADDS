#include "Pirate.h"
#include "Robot.h"
#include "Monkey.h"
#include "string"
Pirate::Pirate(std::string name) : name(name){}
std::string Pirate::getName() { return name; }
bool Pirate::beats(Move* other) {
    if (other->getName() == "Robot" || other->getName() == "Monkey"){
        return true;
    } else {
      return false;
    }
}