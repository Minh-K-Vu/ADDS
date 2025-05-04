#include "BigNumCalc.h"
#include <cctype>

std::list<int> BigNumCalc::buildBigNum(const std::string& s) const {
    std::list<int> n;
    for (char c : s) {
        if (std::isdigit(c)) {
            n.push_back(c - '0');
        } else {
        }
    }
    while (n.size() > 1 && n.front() == 0) {
        n.pop_front();
    }
    return n;
}

std::list<int> BigNumCalc::add(std::list<int> a, std::list<int> b) const {
    std::list<int> r;
    int carry = 0;
    while (!a.empty() || !b.empty() || carry != 0) {
        int x;
        if (!a.empty()) {
            x = a.back();
            a.pop_back();
        } else {
            x = 0;
        }
        int y;
        if (!b.empty()) {
            y = b.back();
            b.pop_back();
        } else {
            y = 0;
        }
        int sum = x + y + carry;
        r.push_front(sum % 10);
        carry = sum / 10;
    }
    while (r.size() > 1 && r.front() == 0) {
        r.pop_front();
    }
    return r;
}

std::list<int> BigNumCalc::sub(std::list<int> a, std::list<int> b) const {
    std::list<int> r;
    int borrow = 0;
    while (!a.empty()) {
        int x = a.back();
        a.pop_back();
        x = x - borrow;
        int y;
        if (!b.empty()) {
            y = b.back();
            b.pop_back();
        } else {
            y = 0;
        }
        if (x < y) {
            x += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        r.push_front(x - y);
    }
    while (r.size() > 1 && r.front() == 0) {
        r.pop_front();
    }
    return r;
}

std::list<int> BigNumCalc::mul(std::list<int> a, std::list<int> b) const {
    int d;
    if (!b.empty()) {
        d = b.back();
    } else {
        d = 0;
    }
    std::list<int> r;
    int carry = 0;
    while (!a.empty()) {
        int p = a.back() * d + carry;
        a.pop_back();
        r.push_front(p % 10);
        carry = p / 10;
    }
    while (carry != 0) {
        r.push_front(carry % 10);
        carry = carry / 10;
    }
    while (r.size() > 1 && r.front() == 0) {
        r.pop_front();
    }
    return r;
}
