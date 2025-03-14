#include "Paper.h"
#include "Rock.h"
#include "string"
Paper::Paper(std::string name) : name(name){}
std::string Paper::getName() { return name; }
bool Paper::beats(Move* other) {
    if (other->getName() == "Rock"){
        return true;
    } else {
      return false;
    }
}