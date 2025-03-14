#ifndef PAPER_H
#define PAPER_H
#include "Move.h"
#include "string"

class Paper : public Move {
    public:
     Paper();
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif