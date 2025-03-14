#ifndef ROCK_H
#define ROCK_H
#include "Move.h"
#include "string"

class Rock : public Move {
    private:
     std::string name;
    public:
     Rock(std::string name = "Rock");
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif