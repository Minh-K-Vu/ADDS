#ifndef MONKEY_H
#define MONKEY_H
#include "Move.h"
#include "string"

class Monkey : public Move {
    public:
     Monkey();
     std::string getName();
     bool beats(Move* other);
};

#endif