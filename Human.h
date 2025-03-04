#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "string"
class Human : public Player {
    private:
     string name = "Human";
    public:
     Human(string name);
     string getName() override;
     char makeMove() override;
};

#endif