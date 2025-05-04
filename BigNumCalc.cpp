#include "BigNumCalc.h"
#include <cctype>
#include <algorithm>
static void normalize(std::list<int>& num) {
    while (num.size() > 1 && num.front() == 0) {
        num.pop_front();
    }
}

std::list<int> BigNumCalc::buildBigNum(const std::string& numString) const {
    std::list<int> result;
    for (char c : numString) {
        if (std::isdigit(c)) {
            result.push_back(c - '0');
        }
    }
    normalize(result);
    return result;
}

std::list<int> BigNumCalc::add(std::list<int> num1, std::list<int> num2) const {
    std::list<int> result;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    int carry = 0;
    while (it1 != num1.rend() || it2 != num2.rend() || carry) {
        int d1 = (it1 != num1.rend() ? *it1++ : 0);
        int d2 = (it2 != num2.rend() ? *it2++ : 0);
        int sum = d1 + d2 + carry;
        result.push_front(sum % 10);
        carry = sum / 10;
    }

    normalize(result);
    return result;
}

std::list<int> BigNumCalc::sub(std::list<int> num1, std::list<int> num2) const {
    std::list<int> result;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    int borrow = 0;
    while (it1 != num1.rend()) {
        int d1 = *it1++ - borrow;
        int d2 = (it2 != num2.rend() ? *it2++ : 0);

        if (d1 < d2) {
            d1 += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        result.push_front(d1 - d2);
    }

    normalize(result);
    return result;
}

std::list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) const {
    int digit = num2.empty() ? 0 : num2.back();
    std::list<int> result;
    int carry = 0;
    for (auto it = num1.rbegin(); it != num1.rend(); ++it) {
        int prod = (*it) * digit + carry;
        result.push_front(prod % 10);
        carry = prod / 10;
    }
    while (carry) {
        result.push_front(carry % 10);
        carry /= 10;
    }
    normalize(result);
    return result;
}
