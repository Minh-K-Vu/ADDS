#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"
#include "string"

class Robot : public Move {
    public:
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif