#ifndef ROCK_H
#define ROCK_H
#include "Move.h"
#include "string"

class Rock : public Move {
    public:
     Rock();
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif