#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "TrieNode.h"
#include <vector>
#include <string>

class Autocomplete {
private:
    TrieNode<ALPHABET_SIZE>* root;
    void dfs(TrieNode<ALPHABET_SIZE>* node, std::string prefix, std::vector<std::string>& results);

public:
    Autocomplete();
    ~Autocomplete();
    void insert(const std::string& word);
    std::vector<std::string> getSuggestions(const std::string& partialWord);
};

#endif
