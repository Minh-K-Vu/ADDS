#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
Robot::Robot(){}
std::string Robot::getName() { return "Robot"; }
bool Robot::beats(Move* other) {
    if (other->getName() == "Ninja" || other->getName() == "Zombie"){
        return true;
    } else {
      return false;
    }
}