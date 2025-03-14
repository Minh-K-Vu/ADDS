#ifndef NINJA_H
#define NINJA_H
#include "Move.h"

class Ninja : public Move {
    public:
     Ninja();
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif