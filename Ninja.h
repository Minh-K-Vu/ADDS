#ifndef NINJA_H
#define NINJA_H
#include "Move.h"

class Ninja : public Move {
    private:
     std::string name;
    public:
     Ninja(std::string name = "Ninja");
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif