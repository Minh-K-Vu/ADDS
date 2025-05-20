#ifndef TRIENODE_H
#define TRIENODE_H

#include <array>
#include <string>
#include <vector>
#include <memory>

const int ALPHABET_SIZE = 128;

template <int SIZE>
struct TrieNode {
    std::array<TrieNode<SIZE>*, SIZE> children{};
    bool isEndOfWord = false;
    int routerNumber = -1;

    TrieNode() {
        children.fill(nullptr);
    }

    ~TrieNode() {
        for (auto child : children) {
            delete child;
        }
    }
};

#endif
