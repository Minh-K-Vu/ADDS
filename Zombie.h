#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"
#include "string"

class Zombie : public Move {
    public:
     Zombie();
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif