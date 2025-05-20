#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include <vector>
#include <string>
#include <array>

using namespace std;

class TrieNode {
public:
    bool isWord;
    array<TrieNode*,26> children;

    TrieNode();
    ~TrieNode();
};

class Autocomplete {
private:
    TrieNode* root;

    void dfs(TrieNode* node, string& prefix, vector<string>& results);

public:
    Autocomplete();
    ~Autocomplete();

    void insert(const string& word);

    vector<string> getSuggestions(const string& partialWord);
};

#endif