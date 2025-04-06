#include "Finder.h"
#include <string>
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    string prefix = "";        
    int previousFound = 0;         

    for (int i = 0; i < s2.size(); ++i) {
        prefix += s2[i];  
        int foundIndex = s1.find(prefix, previousFound);
        if (foundIndex != string::npos) {
            result.push_back(foundIndex);
            previousFound = foundIndex;
        } else {
            for (int j = i; j < s2.size(); ++j) {
                result.push_back(-1); 
            }
            break;
        }
    }

    return result;
}