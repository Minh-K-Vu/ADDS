#include "Pirate.h"
#include "Robot.h"
#include "Monkey.h"
Pirate::Pirate(){}
std::string Pirate::getName() { return "Pirate"; }
bool Pirate::beats(Move* other) {
    if (other->getName() == "Robot" || other->getName() == "Moneky"){
        return true;
    } else {
      return false;
    }
}