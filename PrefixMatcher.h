#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include "TrieNode.h"
#include <string>

class PrefixMatcher {
private:
    TrieNode<2>* root;

public:
    PrefixMatcher();
    ~PrefixMatcher();
    void insert(const std::string& address, int routerNumber);
    int selectRouter(const std::string& networkAddress);
};

#endif
