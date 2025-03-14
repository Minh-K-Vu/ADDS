#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "Move.h"
using namespace std;
class Player {     
 public:
  virtual ~Player(){}
  virtual Move* makeMove() = 0;
  virtual string getName() = 0;
};
#endif