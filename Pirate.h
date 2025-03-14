#ifndef PIRATE_H
#define PIRATE_H
#include "Move.h"
#include "string"

class Pirate : public Move {
    private:
     std::string name;
    public:
     Pirate(std::string name = "Pirate");
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif