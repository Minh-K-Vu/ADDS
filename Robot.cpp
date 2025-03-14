#include "Robot.h"
#include "Ninja.h"
#include "Zombie.h"
Robot::Robot(std::string name) : name(name){}
std::string Robot::getName() { return name; }
bool Robot::beats(Move* other) {
    if (other->getName() == "Ninja" || other->getName() == "Zombie"){
        return true;
    } else {
      return false;
    }
}