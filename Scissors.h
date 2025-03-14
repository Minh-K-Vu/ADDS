#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"
#include "string"

class Scissors : public Move {
    private:
     std::string name;
    public:
     Scissors(std::string name = "Scissors");
     std::string getName() override;
     bool beats(Move* other) override; 
};

#endif