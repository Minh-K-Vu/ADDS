#include "PrefixMatcher.h"

namespace {
    void deleteTrie(TrieNode<BIT_ALPHABET>* node) {
        if (!node) return;
        for (auto child : node->children) {
            deleteTrie(child);
        }
        delete node;
    }
}

PrefixMatcher::PrefixMatcher()
    : root(new TrieNode<BIT_ALPHABET>()) {}

PrefixMatcher::~PrefixMatcher() {
    deleteTrie(root);
}

int PrefixMatcher::bitIndex(char b) const {
    return b - '0';
}

void PrefixMatcher::insert(const std::string& address, int routerNumber) {
    TrieNode<BIT_ALPHABET>* p = root;
    for (char b : address) {
        int idx = bitIndex(b);
        if (idx < 0 || idx >= (int)BIT_ALPHABET)
            continue;
        if (!p->children[idx]) {
            p->children[idx] = new TrieNode<BIT_ALPHABET>();
        }
        p = p->children[idx];
    }
    p->isWord = true;
    p->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(const std::string& dest) const {
    TrieNode<BIT_ALPHABET>* p = root;
    int bestMatch = -1;
    for (char b : dest) {
        int idx = bitIndex(b);
        if (idx < 0 || idx >= (int)BIT_ALPHABET || !p->children[idx]) {
            break;
        }
        p = p->children[idx];
        if (p->isWord) {
            bestMatch = p->routerNumber;
        }
    }
    return bestMatch;
}