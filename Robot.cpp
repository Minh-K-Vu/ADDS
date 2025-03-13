#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
bool Robot::beats(Move* other) {
    if (other->getName() == "Ninja" || other->getName() == "Zombie"){
        return true;
    } else {
      return false;
    }
}