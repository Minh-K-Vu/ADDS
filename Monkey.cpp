#include "Monkey.h"
#include "Move.h"

Monkey::Monkey(){}

std::string Monkey::getName() {
    return "Monkey";
}

bool Monkey::beats(Move* other) {
    if (other->getName() == "Ninja" || other->getName() == "Robot") {
        return true; 
    }
    return false;
}