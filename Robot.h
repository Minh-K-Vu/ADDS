#ifndef ROBOT_H
#define ROBOT_H
#include "Move.h"
#include "string"

class Robot : public Move {
    private:
     std::string name;
    public:
     Robot(std::string name = "Robot");
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif