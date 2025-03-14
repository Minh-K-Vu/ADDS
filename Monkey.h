#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
#include "string"

class Monkey : public Move {
    private:
     std::string name;
    public:
     Monkey(std::string name = "Monkey");
     std::string getName();
     bool beats(Move* other);
};

#endif