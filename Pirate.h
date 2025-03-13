#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"
#include "string"

class Pirate : public Move {
    public:
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif