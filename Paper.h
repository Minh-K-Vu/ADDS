#ifndef PAPER_H
#define PAPER_H
#include "Move.h"
#include "string"

class Paper : public Move {
    private:
     std::string name;
    public:
     Paper(std::string name = "Paper");
     std::string getName() override;
     bool beats(Move* other) override;
};

#endif