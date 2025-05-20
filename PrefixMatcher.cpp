#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() : root(new TrieNode<2>()) {}

PrefixMatcher::~PrefixMatcher() {
    delete root;
}

void PrefixMatcher::insert(const std::string& address, int routerNumber) {
    TrieNode<2>* current = root;
    for (char c : address) {
        int bit = c - '0';
        if (!current->children[bit]) {
            current->children[bit] = new TrieNode<2>();
        }
        current = current->children[bit];
    }
    current->isEndOfWord = true;
    current->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(const std::string& networkAddress) {
    TrieNode<2>* current = root;
    int bestMatch = -1;

    for (char c : networkAddress) {
        int bit = c - '0';
        if (!current->children[bit]) break;
        current = current->children[bit];
        if (current->isEndOfWord) {
            bestMatch = current->routerNumber;
        }
    }

    return bestMatch;
}
