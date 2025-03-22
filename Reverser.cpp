#include "Reverser.h"
#include <cmath>

int Reverser::reverseDigit(int value) {
    if (value < 10) {
      return value;
    } else {
      int lastDigit = value % 10;
      int remainingDigit = value / 10;
      int digitCount = 0;
      int tempValue = remainingDigit;
      while (tempValue != 0) {
        digitCount = digitCount + 1;
        tempValue = tempValue / 10;
      }
      return lastDigit * (int)pow(10,digitCount) + reverseDigit(remainingDigit);
    }
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.length() <= 1) {
      return characters;
    } else {
      char lastCharacter = characters[characters.length() - 1];
      std::string newString = characters.substr(0, characters.length() - 1);
      return lastCharacter + reverseString(newString);
    }
}