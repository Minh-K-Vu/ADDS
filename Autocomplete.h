#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "TrieNode.h"
#include <string>
#include <vector>

static constexpr size_t ALPHABET_SIZE = 26;

class Autocomplete {
public:
    Autocomplete();
    ~Autocomplete();

    void insert(const std::string& word);
    std::vector<std::string> getSuggestions(const std::string& partial) const;

private:
    TrieNode<ALPHABET_SIZE>* root;
    int charIndex(char c) const;

    void dfs(TrieNode<ALPHABET_SIZE>* node,
             std::string& current,
             std::vector<std::string>& out) const;
};

#endif
