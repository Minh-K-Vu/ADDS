#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include "TrieNode.h"
#include <string>

static constexpr size_t BIT_ALPHABET = 2;

class PrefixMatcher {
public:
    PrefixMatcher();
    ~PrefixMatcher();

    void insert(const std::string& address, int routerNumber);
    int selectRouter(const std::string& dest) const;

private:
    TrieNode<BIT_ALPHABET>* root;
    int bitIndex(char b) const;
};

#endif 