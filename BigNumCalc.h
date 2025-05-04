#ifndef BIGNUMCALC_H
#define BIGNUMCALC_H

#include <list>
#include <string>

class BigNumCalc {
public:
    BigNumCalc() = default;
    ~BigNumCalc() = default;
    std::list<int> buildBigNum(const std::string& numString) const;
    std::list<int> add(std::list<int> num1, std::list<int> num2) const;
    std::list<int> sub(std::list<int> num1, std::list<int> num2) const;
    std::list<int> mul(std::list<int> num1, std::list<int> num2) const;
};

#endif