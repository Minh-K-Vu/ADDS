#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Robot.h"
#include "string"

Human::Human(string name) : name(name) {}

Move* Human::makeMove() {
  std::string move;
  cin >> move;
  if (move == "Rock") {
    return new Rock();
  } else if (move == "Paper"){
    return new Paper();
  } else if (move == "Scissors"){
    return new Scissors();
  } else if (move == "Ninja") {
    return new Ninja();
  } else if (move == "Pirate"){
    return new Pirate();
  } else if (move == "Monkey"){
    return new Monkey();
  } else if (move == "Robot") {
    return new Robot();
  } else if (move == "Zombie") {
    return new Zombie();
  } else{
    return new Rock();
  }
}

string Human::getName() {
    return name;
}