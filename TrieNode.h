#ifndef TRIENODE_H
#define TRIENODE_H

#include <array>

template <size_t ALPHABET_SIZE>
struct TrieNode {
    std::array<TrieNode*, ALPHABET_SIZE> children{};
    bool isWord = false;
    int routerNumber = -1;

    TrieNode() { children.fill(nullptr); }
};

#endif
