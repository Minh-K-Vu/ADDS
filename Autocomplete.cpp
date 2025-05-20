#include "Autocomplete.h"

TrieNode::TrieNode() : isWord(false) {
    children.fill(nullptr);
}

TrieNode::~TrieNode() {
    for (auto child : children) {
        delete child;
    }
}

Autocomplete::Autocomplete() {
    root = new TrieNode();
}

Autocomplete::~Autocomplete() {
    delete root;
}

void Autocomplete::insert(const string& word) {
    TrieNode* curr = root;
    for (char c : word) {
        if (c < 'a' || c > 'z') continue;
        int idx = c - 'a';
        if (!curr->children[idx]) {
            curr->children[idx] = new TrieNode();
        }
        curr = curr->children[idx];
    }
    curr->isWord = true;
}

vector<string> Autocomplete::getSuggestions(const string& prefix) {
    vector<string> results;
    TrieNode* curr = root;
    string p;
    for (char c : prefix) {
        if (c < 'a' || c > 'z') return results;
        int idx = c - 'a';
        if (!curr->children[idx]) return results;
        curr = curr->children[idx];
        p.push_back(c);
    }
    dfs(curr, p, results);
    return results;
}

void Autocomplete::dfs(TrieNode* node, string& prefix, vector<string>& results) {
    if (node->isWord) {
        results.push_back(prefix);
    }
    for (int i = 0; i < 26; ++i) {
        if (node->children[i]) {
            prefix.push_back('a' + i);
            dfs(node->children[i], prefix, results);
            prefix.pop_back();
        }
    }
}