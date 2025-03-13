#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
#include "string"
class Human : public Player {
    private:
     string name;
    public:
     Human(string name = "Human");
     string getName() override;
     Move* makeMove() override;
};

#endif