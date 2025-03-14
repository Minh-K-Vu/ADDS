#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"
#include "string"

class Scissors : public Move {
    public:
     Scissors();
     std::string getName() override;
     bool beats(Move* other) override; 
};

#endif