#include "Autocomplete.h"

Autocomplete::Autocomplete() : root(new TrieNode<ALPHABET_SIZE>()) {}

Autocomplete::~Autocomplete() {
    delete root;
}

void Autocomplete::insert(const std::string& word) {
    TrieNode<ALPHABET_SIZE>* current = root;
    for (char c : word) {
        if (!current->children[c]) {
            current->children[c] = new TrieNode<ALPHABET_SIZE>();
        }
        current = current->children[c];
    }
    current->isEndOfWord = true;
}

std::vector<std::string> Autocomplete::getSuggestions(const std::string& partialWord) {
    TrieNode<ALPHABET_SIZE>* current = root;
    for (char c : partialWord) {
        if (!current->children[c]) return {};
        current = current->children[c];
    }

    std::vector<std::string> results;
    dfs(current, partialWord, results);
    return results;
}

void Autocomplete::dfs(TrieNode<ALPHABET_SIZE>* node, std::string prefix, std::vector<std::string>& results) {
    if (!node) return;
    if (node->isEndOfWord) results.push_back(prefix);
    for (int i = 0; i < ALPHABET_SIZE; ++i) {
        if (node->children[i]) {
            dfs(node->children[i], prefix + char(i), results);
        }
    }
}
