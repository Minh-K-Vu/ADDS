#include "Autocomplete.h"

namespace {
    void deleteTrie(TrieNode<ALPHABET_SIZE>* node) {
        if (!node) return;
        for (auto child : node->children) {
            deleteTrie(child);
        }
        delete node;
    }
}

Autocomplete::Autocomplete()
    : root(new TrieNode<ALPHABET_SIZE>()) {}

Autocomplete::~Autocomplete() {
    deleteTrie(root);
}

int Autocomplete::charIndex(char c) const {
    return c - 'a';
}

void Autocomplete::insert(const std::string& word) {
    TrieNode<ALPHABET_SIZE>* p = root;
    for (char c : word) {
        int idx = charIndex(c);
        if (idx < 0 || idx >= (int)ALPHABET_SIZE)
            continue;
        if (!p->children[idx]) {
            p->children[idx] = new TrieNode<ALPHABET_SIZE>();
        }
        p = p->children[idx];
    }
    p->isWord = true;
}

void Autocomplete::dfs(TrieNode<ALPHABET_SIZE>* node,
                       std::string& current,
                       std::vector<std::string>& out) const {
    if (node->isWord) {
        out.push_back(current);
    }
    for (int i = 0; i < (int)ALPHABET_SIZE; ++i) {
        if (node->children[i]) {
            current.push_back(char('a' + i));
            dfs(node->children[i], current, out);
            current.pop_back();
        }
    }
}

std::vector<std::string> Autocomplete::getSuggestions(const std::string& partial) const {
    TrieNode<ALPHABET_SIZE>* p = root;
    for (char c : partial) {
        int idx = charIndex(c);
        if (idx < 0 || idx >= (int)ALPHABET_SIZE || !p->children[idx]) {
            return {};
        }
        p = p->children[idx];
    }
    std::vector<std::string> results;
    std::string current = partial;
    dfs(p, current, results);
    return results;
}