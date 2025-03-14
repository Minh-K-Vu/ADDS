#ifndef ZOMBIE_H
#define ZOMBIE_H
#include "Move.h"
#include "string"

class Zombie : public Move {
    private:
     std::string name;
    public:
     Zombie(std::string name = "Zombie");
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif