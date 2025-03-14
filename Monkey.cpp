#include "Monkey.h"
#include "Move.h"
#include "string"

Monkey::Monkey(std::string name) : name(name){}

std::string Monkey::getName() {
    return name;
}

bool Monkey::beats(Move* other) {
    if (other->getName() == "Ninja" || other->getName() == "Robot") {
        return true; 
    }
    return false;
}